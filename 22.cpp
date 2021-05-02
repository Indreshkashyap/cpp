#include <iostream>
using namespace std;

class B;

class A {
	int x;
  public:
	A(int a) {
		x=a;
	}
	int friend add(A, B);
};

class B {
	int y;
  public:
	B(int b) {
		y=b;
	}
	int friend add(A, B);
};

int add(A a1, B b1) {
	return(a1.x + b1.y);
}

int main() {
	A ob1(10);
	B ob2(20);
	int sum = add(ob1, ob2);
	cout<<"Sum is : "<<sum<<endl;
	return 0;
}
