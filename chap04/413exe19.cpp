#include "std_lib_facilities.h"
using namespace std;

int main () {
	vector<string> names;
	vector<int> scores;
	string name{};
	int score{0};
	while((cin>>name>>score) && (name != "NoName")) {
		for (int i{0}; i<names.size();i++) {
			if (names[i]==name) {
				names.push_back("NoName");
				scores.push_back(0);
				for (int j{0}; j<names.size(); j++) {
					cout<<"("<<names[j]<<", "<<scores[j]<<")\n";
				}
				error("The name already exist");
			}
		}
		names.push_back(name);
		scores.push_back(score);
	}
	return 0;
}