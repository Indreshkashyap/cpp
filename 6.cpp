#include <iostream>
using namespace std;

class demo {
	int x, y;
  public:
	demo() {	// default constructor
		x=y=0;
	}

	demo(int a, int b) { // parameterized constructor
		x = a;
		y = b;
	}

	demo(demo &op) {	// copy constructor
		x = op.x;
		y = op.y;
	}
	~demo() {
		cout<<"Destructor is called\n";
	}

	void show();
};

void demo::show() {
	cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
}

int main() {
	demo d1;
	demo d2(10, 20);
	demo d3=d2;
	d1.show();
	d2.show();
	d3.show();
	return 0;
}
