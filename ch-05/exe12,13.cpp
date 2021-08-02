// #include "std_lib_facilities.h"
// using namespace std;

// const string ex_bad_number_msg = "The number of values to sum must be 1 or greater!";
// const string ex_bad_input_msg = "You entered something that's not an integer!";

// int generateRandNo() {
// 	return rand()%10;
// }

// vector<int> randSeries(int n) {
// 	int r{0};
// 	vector<int> rands;
// 	bool repeat = false;

// 	for (int i{0}; rands.size()<n; i++) {

// 		r = generateRandNo();
// 		repeat = false;

// 		if (rands.size() == 0) {
// 			rands.push_back(r);
// 		}
// 		// rands.push_back(r);

// 		for(int j{0}; j<rands.size(); j++) {
// 			if (r == rands[j]) {
// 				repeat = true;
// 			}
// 		}

// 		if (!repeat) {
// 			repeat = false;
// 			rands.push_back(r);
// 		}
// 	}

// 	return rands;
// }

// int main() {
// 	srand(time(0));
// 	vector<int> rands;
// 	int n{0};
// 	cout<<"Enter the size of numberical string\n";
// 	cin>>n;
// 	if (!cin) throw runtime_error(ex_bad_input_msg);
//     if (n < 1) throw runtime_error(ex_bad_number_msg);

// 	rands = randSeries(n);

// 	for (int i{0}; i<rands.size(); i++) {
// 		cout<<rands[i];
// 	}
// 	cout<<"\n";
// 	return 0;
// }



// Chapter 05, exercise 12: plays "Bulls and Cows" (or Mastermind): the player
// has to guess a four digit integer. If he guesses the right digit in the right
// place, he has "bull"; the the right digit in the wrong place is a "cow". The
// game continues until the player guesses all four digits correctly (has four
// "bulls").
// Exercise 13: randomise game

#include "std_lib_facilities.h"

int bulls = 0;
int cows = 0;

// puts new numbers into solution vector
vector<int> get_new_solution()
{
    vector<int> solution(4);
    solution[0] = randint(10);
    solution[1] = randint(10);
    solution[2] = randint(10);
    solution[3] = randint(10);
    return solution;
}

// turns an integer into a vector
vector<int> int_to_vector(int n)
{
    if (n>9999 || n<0) error("int_to_vector called with wrong number");
    vector<int> v(4);
    v[0] = n/1000 % 10;
    v[1] = n/100 % 10;
    v[2] = n/10 % 10;
    v[3] = n % 10;
    return v;
}

// checks guess for bulls and cows
// first loop for bulls, second loop for cows
void check_guess(vector<int> guess, vector<int> solution)
{
    bulls = 0;
    cows = 0;
    vector<char> is_bull(4,'n');
    vector<char> is_cow(4,'n');
    for (int i = 0; i<solution.size(); ++i) {
        if (guess[i] == solution[i]) {
            ++bulls;
            is_bull[i] = 'y';
        }
    }
    for (int i = 0; i<solution.size(); ++i) {
        if (is_bull[i] == 'n') {
            for (int j = 0; j<guess.size(); ++j) {
                if (is_bull[j]=='n' && is_cow[j]=='n') {
                    if (solution[i] == guess[j]) {
                        ++cows;
                        is_cow[j] = 'y';
                    }
                }
            }
        }
    }
}

int main()
try {
    int guess = 0;
    int seed = 0;
    cout << "Guess my four digit number! Numbers with less digits will be padded with zeros.\n";
    cout << "Enter seed for random numbers: ";
    cin >> seed;
    srand(seed);
    vector<int> solution = get_new_solution();
    cout << "Enter guess ('q' to exit): ";

    while (cin >> guess) {
        if (guess>9999 || guess<0)
            cout << "Number must be between 0000 and 9999!\n";
        else {
            vector<int> v_guess = int_to_vector(guess);
            check_guess(v_guess,solution);
            if (bulls == 4) {
                cout << "You have guessed the number! Setting new solution...\n";
                solution = get_new_solution();
            }
            if (bulls < 4) {
                cout << "Number of bulls: " << bulls << endl;
                cout << "Number of cows: " << cows << endl;
            }
        }
        cout << "Enter guess ('q' to exit): ";
    }
    cout << "You gave up!\n";
    return 0;
}
catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    //keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Unknown exception!\n";
    return 2;
}