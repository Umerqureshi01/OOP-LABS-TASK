#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<sstream>
using namespace std;
class Account {
	private:
	string accountNumber;
	double balance;
	
	string generateAccountNumber() {
	int randomNum= 1000 + rand()%9000;
	
	stringstream ss;
	ss<<"ACC"<<randomNum;
	return ss.str();
}
	public:
	Account(double bal) {
	accountNumber = generateAccountNumber();
	balance = bal;
	}
	Account(string accNum,double bal) {
	accountNumber = accNum;
	balance = bal;
	}


    Account operator+(const Account &obj) {
    string newAccNum = "combined_"+ accountNumber+"_"+obj.accountNumber;
    double newBalance= + obj.balance;
    Account  temp(newAccNum, newBalance);
    return temp;
	}
	
	void display() {
	cout<<"Account Number: "<<accountNumber<<endl;
	cout<<"Balance: "<<balance<<endl;
	}
	double getBalance() {
	return balance;
	}
};
int main () {
	srand(time(0));
	double bal1,bal2;
	
	cout<<"Enter balance for Account 1: "<<endl;
	cin>>bal1;
	cout<<"Enter balance for Account 2: "<<endl;
	cin>>bal2;
	
	Account acc1(bal1);
	Account acc2(bal2);
	
	cout<<"Account 1 details (Auto-generated): "<<endl;
	acc1.display();
	cout<<"Account 2 details (Auto-generated): "<<endl;
	acc2.display();
	
	Account acc3 = acc1+acc2;
	
	cout<<"combined Account Details: "<<endl;
	acc3.display();
	
	cout<<"verification: "<<endl;
	cout<<acc1.getBalance() <<"+" <<acc2.getBalance() <<"=" <<acc3.getBalance() << endl;
	
	return 0;
}
