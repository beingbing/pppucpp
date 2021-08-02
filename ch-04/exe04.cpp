#include <iostream>
using namespace std;

int main() {
    cout << "guess a number between 1 and 100" << endl;
    cout << "answer the below questions in y (for yes) and n (for no)" << endl;
    int lowerBound = 1, upperBound = 100;
    int n;
    char ch;
    while (lowerBound < upperBound) {
        int n = lowerBound + (upperBound - lowerBound)/2;
        cout << "is your number " << n << endl;
        cin >> ch;
        if (ch == 'y') {
            cout << "so, i guessed it right, thanks for playing !!!" << endl;
            break;
        } else if (ch == 'n') {
            cout << "is your number greater than " << n << endl;
            cin >> ch;
            if (ch == 'y') {
                lowerBound = n + 1;
            } else {
                upperBound = n;
            }
        }
    }
    cout << " you are cheating, goodbye !!!" << endl;
    return 0;
}