#include <iostream>
#include <vector>
using namespace std;

int main() {
 char ch;
 char* pc;
 int i;
 int* pi;
 double d;
 double* pd;
 bool b;
 bool* pb;
 vector<int> v(10);
 cout<<"size of char is "<<sizeof(char)<<' '<<sizeof(ch)<<'\n';
 cout<<"size of char* is "<<sizeof(char*)<<' '<<sizeof(pc)<<'\n';
 cout<<"size of int is "<<sizeof(int)<<' '<<sizeof(i)<<'\n';
 cout<<"size of int* is "<<sizeof(int*)<<' '<<sizeof(pi)<<'\n';
 cout<<"size of double is "<<sizeof(double)<<' '<<sizeof(d)<<'\n';
 cout<<"size of double* is "<<sizeof(double*)<<' '<<sizeof(pd)<<'\n';
 cout<<"size of bool is "<<sizeof(bool)<<' '<<sizeof(b)<<'\n';
 cout<<"size of bool* is "<<sizeof(bool*)<<' '<<sizeof(pb)<<'\n';
 cout<<"size of vector<int> is "<<sizeof(vector<int>)<<' '<<sizeof(v)<<'\n';
 return 0;
}
