#include <iostream>
using namespace std;

template<class T>
void sort(T arr[], int n) {
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[i] > arr[j]) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


template<class T>
void search(T arr[], int n) {
	T num;
	cout<<"Enter the Number you want to search : ";
	cin>>num;
	for(int i=0;i<n;i++){	
		if(arr[i]==num){
			cout<<"[+] : Number "<<num<<" found on the Array.\n";
			return;
		}
	}
	cout<<"[-] : Number "<<num<<" dose not found on the Array.\n";
}


int main() {
	int arr1[5] = {30, 20, 50, 40, 10};
	float arr2[5] = {8.4, 7.91, 3.2, 6.9, 1.2};
	for(int i=0;i<5;i++) {
		cout<<arr1[i]<<", ";
	}
	sort(arr1, 5);
	cout<<"\nSorted Array\n";
	for(int i=0;i<5;i++) {
		cout<<arr1[i]<<", ";
	}
	cout<<endl<<endl;
	for(int i=0;i<5;i++) {
		cout<<arr2[i]<<", ";
	}
	sort(arr2, 5);
	cout<<"\nSorted Array\n";
	for(int i=0;i<5;i++) {
		cout<<arr2[i]<<", ";
	}
	cout<<endl;
	return 0;
}
