#include <iostream>
using namespace std;

class A {
  public:
	virtual void f1() {
		cout<<"Method from A\n";
	}
};

class B:public A {
  public:
	void f1() {
		cout<<"Method from B\n";
	}
};
class C:public A {
  public:
	void f1() {
		cout<<"Method from C\n";
	}
};

int main() {
	A *pt;
	A a1;
	pt = &a1;
	pt->f1();
	B b1;
	pt = &b1;
	pt->f1();
	C c1;
	pt = &c1;
	pt->f1();
	return 0;
}
