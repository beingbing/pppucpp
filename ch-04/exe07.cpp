#include "std_lib_facilities.h"
using namespace std;

vector<string> words{"zero","one","two","three","four","five","six","seven","eight","nine"};

double get_values() {
	double opr;
	string word;
	if(cin>>opr)
		return opr;
	cin.clear();
	while(cin>>word) {
		int i{0};
		for(;i<words.size();i++){
			if (word==words[i]){
				return i;
			}
		}
		if (i==words.size()) {
			cout<<"\tnot a spelled number that I know hence discarded\n";
			cout<<"\tplesase consider re-entering the number\n";
		}
	
	}

}

int main () {
	char oprtr;
	double opr1=0.0, opr2=0.0;
	string word;
	cout<<"Enter two operands(in form of digits) followed by an operator\n";
	cout<<"We also support spelled out numbers from zero to nine\n";
	opr1 = get_values();
	opr2 = get_values();
	cin>>oprtr;
	if (oprtr == '/' && opr2 == 0) {
		error("you can not divide with zero");
	}
	switch(oprtr) {
		case '+': cout<<"The sum of "<<opr1<<" and "<<opr2<<" is "<<opr1+opr2<<"\n";break;
		case '-': cout<<"The difference of "<<opr1<<" and "<<opr2<<" is "<<opr1-opr2<<"\n";break;
		case '*': cout<<"The product of "<<opr1<<" and "<<opr2<<" is "<<opr1*opr2<<"\n";break;
		case '/': cout<<"The division of "<<opr1<<" and "<<opr2<<" is "<<opr1/opr2<<"\n";break;
		default: cout<<"I didn't recognize that operator\n";
	}
	return 0;
}