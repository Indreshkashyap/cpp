#include <iostream>
using namespace std;

template<class T1, class T2>
T1 add(T1 x, T2 y) {			// return value of T1 datatype
	return(x+y);
}

int main() {
	int x;
	float y;
	cout<<"Enter an Integer value : ";
	cin>>x;
	cout<<"Enter an float value : ";
	cin>>y;
	cout<<"add(int, float) : "<<add(x, y)<<endl;
	cout<<"add(float, int) : "<<add(y, x)<<endl;
	return 0;
}
