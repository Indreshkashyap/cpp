#include <iostream>
#include <cstring>
using namespace std;

class String {
	char str[30];
  public:
	String() {
		strcpy(str, " ");
	}
	void get();
	void show();
	int operator==(String st);
};

int String::operator==(String st) {
	return strcmp(str, st.str);
}

void String::get() {
	cout<<"Enter String : ";
	cin>>str;
}

void String::show() {
	cout<<str<<endl;
}

int main() {
	String s1, s2;
	s1.get();
	s2.get();
	if(s1==s2)
		cout<<"String is not equal\n";
	else
		cout<<"String is equal\n";
	s1.show();
	s2.show();
	return 0;
}
