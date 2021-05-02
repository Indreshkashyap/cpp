#include <iostream>
#include<stddef.h>
using namespace std;

int main() {
  int N = 3;
  int M = 3;
 

  int** ary = new int*[N];	
  for(int i = 0; i < N; ++i)
      ary[i] = new int[M];
 

  int num;
  cout<<"Enter elements : \n";
  for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			cin>>num;
  			ary[i][j] = num;
		}
  }
	
 
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < M; ++j)
      cout<<ary[i][j]<<"\t";
	cout<<"\n";
  }
 
  for(int i = 0; i < N; ++i)
    delete [] ary[i];
  delete [] ary;
 
  return 0;
}
