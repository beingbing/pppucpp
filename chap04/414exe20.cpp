#include "std_lib_facilities.h"
using namespace std;

int main () {
	vector<string> names;
	vector<int> scores;
	string name{};
	int score{0};
	cout<<"Enter pairs of name value pairs\n"
		<<"If you are done then enter (NoName,0)\n";
	while((cin>>name>>score)) {
		if ((score != 0) && (name == "NoName")) {
			cout<<"\nyou can not enter any other score except 0 for name -> NoName\n";
			continue;
		}
		for (int i{0}; i<names.size();i++) {
			if (names[i]==name) {
				cout<<"you can not enter same name twice\n";
				continue;
			}
		}
		names.push_back(name);
		scores.push_back(score);
		if (name == "NoName" && score == 0) {
			break;
		}
	}

	cout<<"Enter a name to find its value\n";
	while (cin>>name) {
		int i{0};
		for (;i<names.size();i++) {
			if (names[i]==name) {
				cout<<"Its score is: "<<scores[i]<<"\n";
				cout<<"Enter a name to find its value\n";
				break;
			}
		}
		if (i == names.size()){
			cout<<"I don't know that name, enter again a valid one:\n";
		}
	}
	return 0;
}