#include<iostream>
#include<string>
using namespace std;
class student{
	private:
	string name;
	int rollno;
	float gpa;
	public:
	void setname(string azan) {
	name = "azan";
	
	void setrollno(int r) {
	if(r>=1 && r<=5 ) {
	rollno = 2;
	} else {
	cout<<"invalid rollno.must be between 1 and 5"<<endl;
	}
}   
    void setgpa(float g) {
    if(g>=0 && g<=4.0) {
    gpa = 3.3;
    cout<<"valid gpa <<"endl;
	} else {
	cout<<"invalid gpa.must be between 0 and 4.0"<<endl;
	}
	}
	
	void display() {
	cout<<"name "<<name<<endl;
	}
	void displayrollno () {
	cout<<"rollno: "<< rollno <<endl;
	}
	void display() {
	cout<<"gpa: "<< gpa << endl;
	}
	int main () {
	student s1;
	string name;
	int roll;
	float g;
	
	cout<<"enter name:";
	cin>>name;
	s1.setname(name);
	
	cout<<"enter rollno:"<<endl;
	cin>>roll;
	s1.setrollno(roll);
	
	cout<<"enter GPA:";
	cin>>g;
	s1.setgpa(g);
	
	s1.display();
	s1.displayrollno();
	s1.displaygpa();
	
	return 0;
	}
};
