#include <iostream>
using namespace std;

int add(int, int);
float add(float, float);

int main() {
	int x=20,y=18;
	float a=2.5,b=3.4;
	cout<<"20+18 = "<<add(x,y)<<endl;
	cout<<"2.5+3.4 = "<<add(a,b)<<endl;
	return 0;
}

int add(int x, int y) {
	return x+y;
}

float add(float x, float y) {
	return x+y;
}
