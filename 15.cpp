#include <iostream>
using namespace std;

class Matrix {
	int mat[3][3];
  public:
	void get();
	void show();
	int operator==(Matrix m);
};

void Matrix::get() {
	cout<<"Enter Matrix : \n";
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			cin>>mat[i][j];
		}
	}
}

void Matrix::show() {
	cout<<"\nEntered Matrix : \n";
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

int Matrix::operator==(Matrix m) {	
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			if(mat[i][j]!=m.mat[i][j])
				return 1;
		}
	}
	return 0;
}

int main() {
	Matrix m1, m2;
	m1.get();
	m1.show();
	m2.get();
	m2.show();
	if(m1==m2)
		cout<<"M1 and M2 is not equal\n";
	else	
		cout<<"M1 and M2 is equal\n";
	return 0;
}

