#include <iostream>
using namespace std;

int swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x, y;
	cout<<"Enter value : \n";
	cout<<" x : ";
	cin>>x;
	cout<<" y : ";
	cin>>y;
	swap(x, y);
	cout<<"After swapping :\n";
	cout<<"x : "<<x<<endl;
	cout<<"y : "<<y<<endl;
	return 0;
}
