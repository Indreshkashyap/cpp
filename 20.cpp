#include <iostream>
using namespace std;
#define PI 3.14

class Shape {
  public:
	virtual void area()=0;
	virtual void perimeter()=0;
};

class ractangle:public Shape {
	float w;
	float l;
  public:
	ractangle(float x, float y) {
		w = x;
		l = y;
	}
	void area() {
		cout<<"Area of Ractangle is : "<<w*l<<endl;
	}

	void perimeter() {	
		cout<<"Perimeter of Ractangle is : "<<2*(w+l)<<endl;
	}	
};
	
class circule:public Shape {
	float r;
  public:
	circule(float x) {
		r = x;
	}
	void area() {
		cout<<"Area of Circule : "<<PI*r*r<<endl;
	}
	void perimeter() {	
		cout<<"perimeter of Circule : "<<2*PI*r<<endl;
	}
};

int main() {
	ractangle rt(4.3,5.6);
	circule cl(2.3);
	rt.area();
	rt.perimeter();
	cl.area();
	cl.perimeter();
	return 0;
}
