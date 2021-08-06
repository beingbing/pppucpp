
//
// This is example code from Chapter 8.3 "Header Files" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "8.3.f.h"
int g(int i)
{
    return f(i);
}

//------------------------------------------------------------------------------

int main()
{
    return g(1);
}

//------------------------------------------------------------------------------
// to run this file do -> g++ -std=c++17 8.3.f.cpp 8.3.cpp
// compile used source file before using its associated header file
//------------------------------------------------------------------------------
