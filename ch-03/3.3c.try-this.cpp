#include "std_lib_facilities.h"

int main() {
    cout << "please enter your first_name and age\n";
    string first_name = "???";
    double age = 0.0;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age*12 << " months)\n";    
}