#include<iostream>
#include<string>
using namespace std;
class Account {
    private:
    string accountNumber;
    double balance;
    
    public:
    // constructor
    Account(string accNum,double bal) {
    accountNumber = accNum;
    balance = bal;
	}
	//overload + operator
	Account operator+(const Account &obj) {
	string newaccNum="combined_"+accountNumber+"_"+obj.accountNumber;
	double newbalance=balance+obj.balance;
	Account temp(newaccNum,newbalance);
    return temp;
	}
	void display() {
	cout<<"Account Number: "<< accountNumber <<endl;
	cout<<"Balance: $"<< balance <<endl;
	}
	double getBalance() {
	return balance;
	}
};
	int main() {
	string accNum1,accNum2;
	double bal1,bal2;

	
	cout<<"enter Account 1 number: "<<endl;
	cin>>accNum1;
	cout<<"enter Account 1 balance: "<<endl;
	cin>>bal1;
	
	cout<<"\nEnter Account 2 number: ";
	cin>>accNum2;
	cout<<"Enter Account 2 balance: ";
	cin>>bal2;
	cout<<endl;
	
	Account acc1(accNum1,bal1);
	Account acc2(accNum2,bal2);
	
	
	cout<<"Account 1 details:  "<<endl;
	acc1.display();
    
	cout<<"Account 2 details: "<<endl;
	acc2.display();
	
	Account acc3= acc1+acc2;
	
	cout<<"combined Account details: "<<endl;
	acc3.display();
		
	cout<<"verification: "<<endl;
	cout<<acc1.getBalance() <<"+"<<acc2.getBalance() <<"="<<acc3.getBalance() <<endl;
	
	return 0;
}
    
