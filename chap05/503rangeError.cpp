#include "std_lib_facilities.h"
using namespace std;

int main() {
	try {
		vector<int> v;
		for(int i;cin>>i; ){
			v.push_back(i);
		}
		for(int i=0;i<=v.size();i++){
			cout<<"v["<<i<<"]== "<<v[i]<<"\n";
		}
	}
	catch(out_of_range){
		cerr<<"Oops! range error\n";
		return 1;
	}
	catch(...){
		cerr<<"Exception: Something went wrong\n";
		return 2;
	}
	return 0;
}
