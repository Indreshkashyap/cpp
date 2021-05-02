#include <iostream>
using namespace std;
#define M 1000

class customer {
	char cname[30];
	int acc_no, balance;
  public:
	void createacc();
	void diposit();
	void withdrawl();
	void details();
};

void customer::createacc() {
	cout<<"Customer name : ";
	cin.get(cname, 30);
	acc_no = M+1;
	cout<<"Amount to diposit : ";
	cin>>balance;
	while(balance < 1000) {
		cout<<"Error : Diposit ammount should not be less then 1000\n";
		cout<<"Re-Enter Diposit : ";
		cin>>balance;
	}
	cout<<"Account created\n";
}

void customer::diposit() {
	int dam;
	cout<<"Enter Amount to diposit : ";
	cin>>dam;
	balance+=dam;
	cout<<"Amount deposited successfully.\n";
}

void customer::withdrawl() {
	int wam;
	cout<<"Enter withdrawl amount : ";
	cin>>wam;
	while((balance-wam) < 1000) {
		cout<<"Error : You can't withdrawl "<<wam<<"/-\n";
		cout<<"Maximum withdrawl limit for your account is ";
		cout<<(balance-1000)<<"/-\n";
		cout<<"Re-enter withdrawl ammount : ";
		cin>>wam;
	}
	balance-=wam;
	cout<<"Successful\n";
}

void customer::details() {
	cout<<endl<<"Customer Name : "<<cname<<endl;
	cout<<"Account No. : "<<acc_no<<endl;
	cout<<"Account Balance : "<<balance<<endl;
}

int main() {
	int op;
	customer c1;
	c1.createacc();
	while(1) {
		cout<<"\nOptions :\n";
		cout<<"1. Diposit\n";
		cout<<"2. Withdrawl\n";
		cout<<"3. Details\n";
		cout<<"4. Exit\n";
		cout<<":> ";
		cin>>op;
		if(op==1) {
			c1.diposit();
		} else if(op==2) {
			c1.withdrawl();
		} else if(op==3) {
			c1.details();
		} else {
			return 0;
		}
	}	 	
}
