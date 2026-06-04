#include<iostream>
#include<string>
using namespace std;
class Person {
	protected:
	string name;
	int age;
	public:
	void setperson(string  n,int a) {
	name =n;
	age  =a;
	}
	void displayperson() {
	cout<<"Name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	}
};

class student : public Person {
	private:
	int rollno;
	string course;
	
	public:
	void setstudent(string n,int a,int r,string c) {
	setperson(n,a);
	rollno=r;
	course=c;
	}
	void displaystudent() {
	displayperson();
	cout<<"rollno: "<<rollno<<endl;
	cout<<"course: "<<course<<endl;
	}
};

int main() {
	student s1;
	s1.setstudent("ahmed",44,32,"BSCS");
	s1.displaystudent();
	
	return 0;
}
