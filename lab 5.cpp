#include<iostream>
using namespace std;
class student {
	string name;
	int age;
	public:
	student() {
	name = "azan";
	age = 33;
	}
	void display() {
	cout<<name<<endl;
	cout<<age<<endl;
	}
};
	int main() {
	student s;
	s.display();
	return 0;
	}
