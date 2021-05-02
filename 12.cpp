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
	String operator+(String st);
};

String String::operator+(String st) {
	String t;
	strcpy(t.str, str);
	strcat(t.str, st.str);
	return t;
}

void String::get() {
	cout<<"Enter String : ";
	cin>>str;
}

void String::show() {
	cout<<str<<endl;
}

int main() {
	String s1, s2, s3;
	s1.get();
	s2.get();
	s3=s1+s2;
	s3.show();
	return 0;
}
