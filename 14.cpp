#include <iostream>
using namespace std;

class Matrix {
	int mat[3][3];
  public:
	void get();
	void show();
	Matrix operator*(Matrix m);
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
	cout<<"\nMatrix : \n";
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

Matrix Matrix::operator*(Matrix m) {
	Matrix t;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			t.mat[i][j] = 0;
			for(int k=0;k<3;k++) {
				t.mat[i][j]+=mat[i][k]*m.mat[k][j];
			}
		}
	}
	return t;
}

int main() {
	Matrix m1, m2, m3;
	m1.get();
	m1.show();
	m2.get();
	m2.show();
	m3=m1*m2;
	m3.show();
	return 0;
}

