#include<iostream>
#include<string>
using namespace std;
class Account {
    private:
    string accountNumber;
    double balance;
    
    public:
    Account(string accNum,double bal) {
    accountNumber = accNum;
    balance = bal;
	}
	Account operator+(const Account &obj) {
	string newaccNum="Combined_"+accountNumber+"_"+obj.accountNumber;
	double newbalance=balance+obj.balance;
	Account temp(newaccNum,newbalance);
    return temp;
	}
	void display() {
	cout<<"Account Number: "<< accountNumber <<endl;
	cout<<"Balance: $"<< balance <<endl;
	}
	double getbalance() {
	return balance;
	}
};
	int main() {
	Account acc1("ACC101",655.0);
	Account acc2("acc102",554.0);
	
	cout<<"Account 1 details: "<<endl;
	acc1.display();
	cout<<"Account 2 details: "<<endl;
	acc2.display();
	
	Account acc3 = acc1+acc2;
	cout<<"combined Account details: "<<endl;
	acc3.display();
	
	cout<<"verification: "<<endl;
	cout<<acc1.getbalance() <<"+"<<acc2.getbalance() <<"="<<acc3.getbalance() <<endl;
	
	return 0;
}
    
