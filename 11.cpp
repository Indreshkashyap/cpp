#include <iostream>
using namespace std;

class A {
	int x, y;
  public:
	A() {
		x=y=0;
	}
	void get() {
		cout<<"Enter X and Y :\n";
		cin>>x>>y;
	}
	void show() {
		cout<<x<<", "<<y<<endl;
	}
	void operator++();
	void operator--();
};
void A::operator++() {
	++x;
	++y;
}

void A::operator--() {
	--x;
	--y;
}


int main() {
	A a1;
	a1.get();
	a1.show();
	++a1;
	a1.show();
	--a1;
	a1.show();
	return 0;
}
