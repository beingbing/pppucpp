#include "std_lib_facilities.h"
using namespace std;

int main() {
	string name, frnd_name;
	char sex;
	int age;
	cout<<"Enter the name of the person you want to write to, then press enter\n";
	cin>>name;
	cout<<"Enter your friends name\n";
	cin>>frnd_name;
	cout<<"Enter your friends sex(m for male or f for female)\n";
	cin>>sex;
	cout<<"Enter friends age\n";
	cin>>age;
	while( age<0 || age>110 ) {
		simple_error("you're kidding!");
		cout<<"Enter age again\n";
		cin>>age;
	}
	cout<<"Dear "<<name<<",\n";
	cout<<"\tHow are you? I am fine. I miss you.\n"
	<<" Have you seen "<<frnd_name<<" lately? ";
	if (sex == 'm') {
		cout<<"If you see "<<frnd_name<<" please ask him to call me.";
	} else {
		cout<<"If you see "<<frnd_name<<" please ask her to call me.";
	}
	cout<<"\nI hear you just had a birthday and you are "
	<<age<<" years old.";
	if ( age<12 ) {
		cout<<" Next year you will be "<<age+1<<".\n";
	} else if ( age == 17 ) {
		cout<<" Next year you will be able to vote.\n";
	} else if ( age>70 ) {
		cout<<" Hope you are doing well.\n";
	} else {
		cout<<" I hope you are enjoying retirement.\n";
	}
	cout<<"\n"<<"Yours sincerely,\n Samar Taj Shaikh\n";
	return 0;
}