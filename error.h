#include <string>

void error(string s){
	throw runtime_error(s);
	cin.clear();
}
