#include <iostream>
using namespace std;

class dist {
	int ft, in;
  public:
	dist() {
		ft=in=0;
	}
	void get();
	void show();
	void add(dist, dist);
};

void dist::get() {
	cout<<"Enter feet : ";
	cin>>ft;
	cout<<"Enter inch : ";
	cin>>in;
}

void dist::show() {
	cout<<"Feet: "<<ft<<endl<<"Inch: "<<in<<endl;
}

void dist::add(dist x, dist y) {
	ft = x.ft + y.ft;
	in = x.in + y.in;
	ft+=(in/12);
	in=in%12;
}

int main() {
	dist d1, d2, d3;
	d1.get();
	d2.get();
	d3.add(d1, d2);
	d3.show();
	return 0;
}
