
//
// This is example code from Chapter 4.6.1 "Growing a vector" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{
    vector<int> vi = {5,7,9,4,6,8};

    for(int i=0; i<v.size(); ++i)
        cout << "v[" << i << "]==" <<v[i] << '\n'; 

    for (int x : vi) cout<< x << endl;  // range-for-loop
}

//------------------------------------------------------------------------------
