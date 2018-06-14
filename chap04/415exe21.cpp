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

	cout<<"Enter a score to find its value\n";
	vector<string> same_score_names;
	while (cin>>score) {
		int i{0};
		for (;i<scores.size();i++) {
			if (scores[i]==score) {
				same_score_names.push_back(names[i]);
			}
		}
		for (i=0;i<same_score_names.size();i++) {
			cout<<same_score_names[i];
			if (i!= same_score_names.size()-1) {
				cout<<", ";
			}
		}
		cout<<"Enter a score to find its value\n";
	}
	return 0;
}