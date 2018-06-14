#include <iostream>
#include <string>

using namespace std;

class Bad_area {};

void error(string s){
	throw runtime_error(s);
	cin.clear();
}

int area(int length, int width){
	if (length<=0 || width<=0) throw Bad_area{};
	return length*width;
}

int framed_area(int length, int width){
	constexpr int frame_width = 2;
	if (length-frame_width<=0 || width-frame_width<=0)
		error("non-positive area() argument called by framed_area()");
	return area(length-frame_width, width-frame_width);
}

int main() {
	try {
		int x=-1;
		int y=2;
		int z=4;
		int area1=area(x,y);
		int area2=framed_area(1,z);
		int area3=framed_area(y,z);
		double ratio = double(area1)/area3;
	}
	catch (Bad_area) {
		cout<<"Oops! Bad arguments to area()\n";
	}
	return 0;
}
