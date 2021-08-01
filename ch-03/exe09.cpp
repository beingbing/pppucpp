#include "std_lib_facilities.h"
using namespace std;

int main()
{
	cout << "Enter a number in words (e.g, one, two, etc)\n";
	string num;
	cin >> num;
	switch (num)
	{
	case "zero":
		cout << 0 << "\n";
		break;
	case "one":
		cout << 1 << "\n";
		break;
	case "two":
		cout << 2 << "\n";
		break;
	case "three":
		cout << 3 << "\n";
		break;
	case "four":
		cout << 4 << "\n";
		break;

	default:
		cout << "not a number I know\n";
	}
	return 0;
}