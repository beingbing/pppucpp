#include "std_lib_facilities.h"
using namespace std;

int main () {
	char oprtr;
	double opr1=0.0, opr2=0.0;
	cout<<"Enter an operator followed by two operands\n";
	cin>>oprtr>>opr1>>opr2;
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