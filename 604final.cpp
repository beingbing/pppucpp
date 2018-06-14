#include <iostream>
#include <string>
using namespace std;

void error(string s){
	throw runtime_error(s);
}

class Token {
	public:
		char kind;
		double value;
};

class Token_stream {
	public:
		Token get();
		void putback(Token t);

	private:
		bool full{false};
		Token buffer;
}

double expression() {
	double left = term();
	Token t = ts.get();
	while(true) {
		switch(t.kind) {
			case '+':
				left += term();
				t=ts.get();
				break;
			
			case '-':
				left -= term();
				t=ts.get();
				break;
			
			default:
				ts.putback(t);
				return left;
		}
	}
}

double term() {
	double left = primary();
	Token t = ts.get();
	while(true) {
		switch(t.kind) {
			case '*':
				left *= term();
				t=ts.get();
				break;

			case '/':
				{
					double d = primary();
					if(d==0) error("divided by zero");
					left /= d;
					t=ts.get();
					break;
				}
			
			default:
				ts.putback(t);
				return left;
		}
	}
}

double primary() {
	Token t=ts.get();
	switch(t.kind) {
		case '(':
			{
				double d = expression();
				t=ts.get();
				if (t.kind != ')') error("')' expected");
				return d;
			}

		case '8':
			return t.value;

		default:
			error("primary expected");
	}
}

int main() {
	try {
		double val=0;
		while(cin){
			Token t=ts.get();
			if (t.kind == 'q') break;
			if (t.kind == ';') cout<<"="<<val<<'\n';
			else ts.putback(t);
			val=expression();
		}
	}
	catch(exception& e) {
		cerr<<e.what()<<'\n';
		return 1;
	}
	catch(...) {
		cerr<<"exception \n";
		return 2;
	}
	return 0;
}
