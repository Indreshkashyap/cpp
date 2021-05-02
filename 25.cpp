// x+,y+ 1st quandrant
// x-,y+ 2nd quandrant
// x-,y- 3rd quandrant
// x+,y- 4rd quandrant
// x=y=0 then it is at origin
#include <iostream>
using namespace std;

int main() {
	int x, y;
	cout<<"Enter two numbers X and Y : ";
	cin>>x>>y;
	if(x>0 && y>0) {
		cout<<"X and Y is in 1st quadrant\n";
	} else if(x<0 && y>0) {
		cout<<"X and Y is in 2nd quadrant\n";
	} else if(x<0 && y<0) {
		cout<<"X and Y is in 3rd quadrant\n";	
	} else if(x>0 && y<0) {
		cout<<"X and Y is in 4th quadrant\n";
	} else if(x==0 && y==0) {
		cout<<"X and Y is in origin.\n";
	}
	return 0;
}
