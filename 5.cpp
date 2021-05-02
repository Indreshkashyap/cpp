#include <iostream>
using namespace std;
int sum(int a, int b, int c=0, int d=0);

int main() {
	cout<<sum(10, 20)<<endl;
	cout<<sum(10, 20, 30)<<endl;
	cout<<sum(10, 20, 30, 40)<<endl;
	return 0;
}

int sum(int a, int b, int c, int d) {
     return (a+b+c+d);
 }
