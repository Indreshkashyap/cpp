#include <iostream>
using namespace std;

class A {
  public:
	A() {
		cout<<"A";
	}
};

class B {
  public:
	B() {
		cout<<"B";
	}
};

class C:public A, public B {
  public:
  	C() {
		cout<<"C\n";
	}
};

int main() {
	C c1;
	return 0;
}
