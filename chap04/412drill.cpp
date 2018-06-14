#include "std_lib_facilities.h"
using namespace std;

constexpr double cm_m_conv {0.01};
constexpr double in_m_conv {2.54*cm_m_conv};
constexpr double ft_m_conv {12*in_m_conv};
const vector<string> valid_units {"m", "cm", "in", "ft"};

bool is_unit_legal (string unit) {
	for (int i{0}; valid_units.size(); i++) {
		if (valid_units[i]==unit) {
			return true;
		}
	}
	return false;
}

double conv_to_m (double val, string unit) {
	if (unit == "cm") {
		val = val*cm_m_conv;
	} else if (unit == "in") {
		val = val*in_m_conv;
	} else if (unit == "ft") {
		val = val*ft_m_conv;
	}
	return val;
}

void sorted_entries(vector<double> entries) {
	sort(entries);
	cout<<"\t";
	for (int i{0}; i<entries.size(); i++) {
		cout<<entries[i];
		if (i != entries.size()-1) {
			cout<<", ";
		}
	}
	cout<<"\n";
}

int main () {
	double max{-32767.0}, min{32767.0}, val{0}, sum{0};
	int count{0};
	string unit{};
	vector<double> entries;
	cout.precision(15);
	while (cin>>val>>unit) {
		if (is_unit_legal(unit)) {
			cout<<"\tyou entered an exceptable value ";
			cout<<val<<" "<<unit<<"\n";
			
			if (unit != "m") {
				val = conv_to_m(val, unit);
			}

			if (val > max) {
				max = val;
				cout<<"\tThe value you entered is "<<val<<" m\n";
				cout<<"\tThe largest value so far "<<max<<"\n";
			} else if (val < min) {
				min = val;
				cout<<"\tThe value you entered is: "<<val<<" m\n";
				cout<<"\tThe smallest value so far "<<min<<"\n";
			} else if (val == max || val == min) {
				cout<<"\tyou entered "<<val<<" again\n";
			}

			sum += val;
			count++;
			cout<<"\tThe total so far is: "<<sum<<"\n";
			cout<<"\tYou have entered "<<count<<" values so far\n";
			entries.push_back(val);
			sorted_entries(entries);

		} else {
			cout<<"\tillegal or unknown value, hence it is rejected\n"
				<<"\tplease enter a legal unit (m, cm, in, ft)\n";
		}
	}
	return 0;
}