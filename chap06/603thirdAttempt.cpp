#include <iostream>
#include <vector>
using namespace std;

class Token {
	public:
		char kind;
		double value;
};

Token::get_token();

vector<Token> tok;	

int main() {
	while(cin){
		Token t=get_token();
		tok.push_back(t);
	}
}
