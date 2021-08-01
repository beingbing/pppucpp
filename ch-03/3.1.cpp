
//
// This is example code from Chapter 3.1 "Input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// read and write a first name
int main()
{
    cout << "Please enter your first name (followed by 'enter'):\n"; // prompt message
    string first_name;    // first_name is a variable of type string
    cin >> first_name;    // read characters into first_name, >> get-from operator
    cout << "Hello, " << first_name << "!\n";
    cout << "first_name" << " is " << first_name;
}

//------------------------------------------------------------------------------
