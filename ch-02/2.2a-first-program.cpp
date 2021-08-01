//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int main() // C++ programs start by executing the function main
{
	cout << "Hello, World!\n"; // output "Hello, World!"
	return 0;
}

//------------------------------------------------------------------------------

// notes
// 1. The name cout refers to standard output stream
// 2. Characters "put into" cout(character output stream) using output operator "<<".
// 3. returning 0 means program terminated successfully
