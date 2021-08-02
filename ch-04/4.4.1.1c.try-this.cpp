
#include "std_lib_facilities.h"

int main() {
    const double yen_per_dollar = 0.0091;
    const double kroner_per_dollar = 0.11;
    const double pounds_per_dollar = 1.39;
    int currency = 1;
    char unit = ' ';
    cout<< "Please enter an amount followed by a currency (y:yen ,k:kroner or p:pounds):\n";
    cin >> currency >> unit;

    if (unit == 'y')
        cout << currency << " yen == " << yen_per_dollar*currency << " dollars\n";
    else if (unit == 'k')
        cout << currency << " kroner == " << kroner_per_dollar*currency << " dollars\n";
    else if (unit == 'p')
        cout << currency << " pounds == " << pounds_per_dollar*currency << " dollars\n";
    else
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}

//------------------------------------------------------------------------------
