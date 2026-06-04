#include<iostream>
#include<stdexcept>
using namespace std;
int main() {
	double num1,num2;
	cout<<"Enter two numbers to add: "<<endl;
	try {
	cout<<"numbers 1: "<<endl;
	cin>>num1;
	if (num1<0) {
	throw runtime_error("Error: negative numbers are not allowed.");
	}
	cout<<"number 2:"<<endl;
	cin>>num2;
	if (num2<0) {
	throw runtime_error("Error: negative numbers are not allowed.");
	}
	double sum = num1 + num2;
	cout<<"result (sum): "<<sum<<endl;
}
    catch (const runtime_error& e) {
    cout<<e.what() <<endl;
	} catch (...) {
	cout<<"An unknown error occured."<<endl;
	}
	return 0;
}

