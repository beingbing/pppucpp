#include "std_lib_facilities.h"
using namespace std;

int main() {
	srand(time(0));
	int r = rand()%10;
	int computer_choice = r%3;
	vector<string> choices{"rock", "paper", "scissors"};
	string comp_stg = choices[computer_choice];
	string user_input;

	cout<<"Lets play 'Rock, Paper and Scissor'"<<"\n";
	
	while (true) {

		cout<<"Enter your choice (rock, paper or scissors)\n";
		cin>>user_input;

		if (user_input!="rock" && user_input!="paper" && user_input != "scissors") {
			cout<<"we don't recognize that input, plz enter a valid choice\n";
		} else {
			break;
		}

	}

	if((comp_stg == "rock" && user_input=="scissors") || (comp_stg == "paper" && user_input=="rock") || (comp_stg == "scissors" && user_input=="paper")) {
		cout<<"computer choose "<<comp_stg<<" ";
		cout<<"computer wins\n";
	} else if ((user_input == "rock" && comp_stg=="scissors") || (user_input == "paper" && comp_stg=="rock") || (user_input == "scissors" && comp_stg=="paper")) {
		cout<<"computer choose "<<comp_stg<<" ";
		cout<<"you wins\n";
	} else if((comp_stg == "rock" && user_input=="rock") || (comp_stg == "paper" && user_input=="paper") || (comp_stg == "scissors" && user_input=="scissors")) {
		cout<<"computer choose "<<comp_stg<<" ";
		cout<<"its a draw\n";
	}
	
	return 0;
}