#include <iostream>
using namespace std;

int main() {
	int n, *np, *fp;
	cout<<"Enter a number : ";
	cin>>n;
	np = &n;
	*fp = 1;
	for(int i=1;i<=*np;i++)
		*fp=*fp*i;
	cout<<*fp<<endl;
	return 0;
}
