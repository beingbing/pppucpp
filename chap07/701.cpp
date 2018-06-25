/* 

	Simple calculator

	This program implements a basic expression calculator.
	Input from cin, output to cout.

	Revision history:
		Revised by Samar Taj Shaikh on June 2018

	The grammar for input is-

		Calculation:
			Statement
			Print
			Quit
			Calculation Statement

		Statement:
			Declaration
			Expression
			Print
			Quit

		Declaration:
			"let" Name "=" Expression

		Print:
			;

		Quit:
			q

		Expression:
			Term
			Expression + Term
			Expression - Term

		Term:
			Primary
			Term * Primary
			Term / Primary
			Term % Primary

		Primary:
			Number
			( Expression )
			- Primary
			+ Primary

		Number:
			floating-point literal


	Input comes from cin through the Token_stream called ts.

*/

#include "../std_lib_facilities.h"
using namespace std;

//------------------------------------------------------------------------------

const char number = '8';    // t.kind==number means that t is a number Token
const char quit   = 'q';    // t.kind==quit means that t is a quit Token
const char print  = ';';    // t.kind==print means that t is a print Token
const char name   = 'a';    // name token
const char let    = 'L';    // declaration token
const string declkey = "let";// declaration keyword 
const string prompt = "> ";
const string result = "= "; // used to indicate that what follows is a result

//------------------------------------------------------------------------------

class Token {
public:
	char kind;		// what kind of token
	double value;	// for numbers: a value
	string name;    // for names: name itself
	Token(char ch)    		   :kind(ch), value(0)   {}    
    Token(char ch, double val) :kind(ch), value(val) {}
    Token(char ch, string n)   :kind(ch), name(n)    {}
};

//------------------------------------------------------------------------------


class Token_stream {
public:
	Token_stream();   // make a Token_stream that reads from cin
	Token get();
	void putback(Token t);
	void ignore(char c);
private:
	bool full{false};
	Token buffer;
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
:full(false), buffer(0)    // no Token in buffer
{}

//------------------------------------------------------------------------------

void Token_stream::putback(Token t) {
	if (full) error("putback() into a full buffer");
	buffer = t;
	full = true;
}

//------------------------------------------------------------------------------

Token Token_stream::get() {
	if (full) {
		full = false;
		return buffer;
	}

	char ch;
	cin>>ch;

	switch(ch) {
		case print: // for print
		case quit: // for quit
		case '%':
		case '(': 
		case ')': 
		case '+': 
		case '-': 
		case '*': 
		case '/':
		case '=':
			return Token{ch};
		case '.':
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
		{
			cin.putback(ch);
			double val;
			cin>>val;
			return Token{number, val};
		}
		default: 
			if (isalpha(ch)) {
	            string s;
	            s += ch;
	            while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s+=ch;
            	cin.putback(ch);
	            if (s == declkey) return Token{let};    // keyword "let"
	            return Token{name,s};
	        }
			error("Bad Token");
	}
}

//------------------------------------------------------------------------------

void Token_stream::ignore(char c) {
	// first look in buffer
	if (full && c==buffer.kind) {
		full = false;
		return;
	}
	full = false;

	// now search input
	char ch=0;
	while (cin>>ch)
		if (ch == c) return;
}

//------------------------------------------------------------------------------

Token_stream ts;

//------------------------------------------------------------------------------

class Variable {
public:
    string name;
    double value;
    Variable (string n, double v) :name(n), value(v) { }
};

//------------------------------------------------------------------------------

vector<Variable> var_table;

//------------------------------------------------------------------------------

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------

double get_value(string s) { // return the value of variable named s
	for (const Variable& v : var_table)
		if (v.name == s) return v.value;
	error("get: undefined variable ", s);
}

//------------------------------------------------------------------------------

void set_value(string s, double d) { // set variable named s to d
	for (Variable& v: var_table)
		if (v.name == s) {
			v.value = d;
			return;
		}
	error("set: undefined variable ", s);
}

//------------------------------------------------------------------------------

bool is_declared(string var) { // is var already in var_table ?
	for (const Variable& v: var_table)
		if (v.name == var) return true;
	return false;
}

//------------------------------------------------------------------------------

double define_name(string var, double val) { // add {var, val} to var_table
	if (is_declared(var)) error(var, "declared twice");
	var_table.push_back(Variable(var, val));
	return val;
}

//------------------------------------------------------------------------------

double declaration() {
	// assume we have seen "let"
	// handle name = expression
	// declare a variable called "name" with the initial value "expression"
	Token t = ts.get();
	if (t.kind != name ) error("name expected in declaration");
	string var_name = t.name;

	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", var_name);

	double d = expression();
	define_name(var_name, d);
	return d;
}

//------------------------------------------------------------------------------

double statement() {
	Token t = ts.get();

	switch (t.kind) {
		
		case let: 
			return declaration();
		
		default: 
			ts.putback(t);
			return expression();
	}
}

//------------------------------------------------------------------------------

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

double primary()     // read and evaluate a Primary
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
        {    
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case number:            // we use '8' to represent a number
        return t.value;  // return the number's value
    case name:
    	return get_value(t.name);
    case '-':
    	return - primary();
    case '+':
    	return primary();
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

void clean_up_mess() {
	ts.ignore(print);
}

//------------------------------------------------------------------------------

void calculate() {
	while(cin) {
		try {
			cout<<prompt;
			Token t = ts.get();
			while (t.kind == print) t = ts.get();
			if (t.kind == quit) return;
			ts.putback(t);
			cout<<result<<statement()<<'\n';
		}
		catch (exception& e) {
			cerr<<e.what()<<'\n';
			clean_up_mess();
		}
	}
}

//------------------------------------------------------------------------------

int main() {
	try {
		// predefine names:
	    define_name("pi",3.1415926535);
	    define_name("e",2.7182818284);

		calculate();

		keep_window_open();
		return 0;
	}
	catch (exception &e) {
		cerr<<e.what()<<'\n';
		keep_window_open("~~");
		return 1;
	}
	catch (...) {
		cerr<<"exception \n";
		keep_window_open("~~");
		return 2;
	}
}

//------------------------------------------------------------------------------

double expression() {
	double left = term();
	Token t = ts.get();

	while(true) {
		switch(t.kind) {
			case '+': left += term();
					  t = ts.get();
					  break;

			case '-': left -= term();
					  t = ts.get();
					  break;

			default:
					  ts.putback(t);
					  return left;
		}
	}
}

//------------------------------------------------------------------------------

double term() {
	double left = primary();
	Token t = ts.get();

	while(true) {
		switch(t.kind) {
			case '*': left *= term();
					  t = ts.get();
					  break;

			case '/': 
					{
					  double d = primary();
					  if (d == 0) error("divide by zero");
					  left /= d;
					  t = ts.get();
					  break;
					}

			case '%':
					{
						double d = primary();
						if (d == 0) error("%: divide by zero");
						left = fmod(left, d);
						t = ts.get();
						break;
					}

			default:
					  ts.putback(t);
					  return left;
		}
	}
}

//------------------------------------------------------------------------------			