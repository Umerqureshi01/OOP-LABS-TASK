#include<iostream>
#include<string>
using namespace std;
class Person {
	string name;

 public:
    // default constructor 
    Person() {
	name="ali";
	}
	// parameterized constructor
	Person(string unknown) {
	name=unknown;
	}
	void display() {
    cout<<"Name: "<<name<<endl;
	}
};
int main() {
	string name;
	Person p1("ali");
	
	
	p1.display();
	
	return 0;
    };

