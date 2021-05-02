#include <iostream>
using namespace std;

class complex {
	int real, imag;
  public:
	void get();
	void display();
	complex friend add(complex, complex);
};

void complex::get() {
	cout<<"Enter values for real and imag : ";
	cin>>real>>imag;
}

void complex::display() {
	cout<<"real : "<<real<<endl;
	cout<<"imag : "<<imag<<endl;
}

complex add(complex a, complex b) {
	complex t;
	t.real = a.real + b.real;
	t.imag = a.imag + b.imag;
	return t;
}

int main() {
	complex x, y, z;
	x.get();
	y.get();
	z = add(x, y);
	z.display();
	return 0;
}
