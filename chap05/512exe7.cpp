#include "std_lib_facilities.h"
using namespace std;

vector<double> find_roots(int a, int b, int c) {
	double surdVal = b*b-4*a*c;
	if (surdVal<0) error("square root of negative number will produxe imaginary roots");
	double r1 = (-b + sqrt(surdVal))/(2*a);
	double r2 = (-b - sqrt(surdVal))/(2*a);
	vector<double> roots;
	roots.push_back(r1);
	roots.push_back(r2);
	return roots;
}

int main() {
	cout<<"To solve a quadratic equation,\n represent it in the form ax^2 + bx +c = 0\n";
	cout<<"Enter a: \t";
	int a{0};
	cin>>a;
	cout<<"Enter b: \t";
	int b{0};
	cin>>b;
	cout<<"Enter c: \t";
	int c{0};
	cin>>c;
	vector<double> roots = find_roots(a,b,c);
	for (int i{0}; i<roots.size(); i++) {
		cout<<roots[i]<<'\n';
	}
	return 0;
}