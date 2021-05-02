#include <iostream>
#include <cmath>
using namespace std;

class point2D {
	int x, y;
  public:
	point2D() {
		x=y=0;
	}
	void get();
	float dist(point2D);
};

void point2D::get() {
	cout<<"Enter x and y :\n";
	cin>>x>>y;
}

float point2D::dist(point2D p) {
	int tx = x - p.x;
	int ty = y - p.y;
	float d = sqrt(tx*tx+ty*ty);
	return d;
}

int main() {
	point2D p1, p2;
	p1.get();
	p2.get();
	cout<<"distance between p1 and p2 are : "<<p1.dist(p2)<<endl;
	return 0;
}
