#include <iostream>
using namespace std;

class complex {
	int r, img;
  public:
	complex() {
		r=img=0;
	}
	void get();
	void show();
	complex multi(complex);
};

void complex::get() {
	cout<<"Enter r and img numbers : ";
	cin>>r>>img;
}

void complex::show() {
	cout<<"real : "<<r<<"\nimg : "<<img<<endl;
}

complex complex::multi(complex n) {
	complex t;
	t.r = r*n.r;
	t.img = img*n.img;
	return t;
}

int main() {
	complex c1, c2, c3;
	c1.get();
	c2.get();
	c3=c1.multi(c2);
	c3.show();
	return 0;
}
