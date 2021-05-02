#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if(argc != 3) {
		cout<<"[!] Invalid Arguments.??\n";
		return 1;
	}
	char ch;
	fstream f1, f2;
	f1.open(argv[1], ios::in);
	f2.open(argv[2], ios::out);
	while((ch=f1.get())!=EOF) {
		f2.put(ch);
	}
	f1.close();
	f2.close();
	return 0;
}
