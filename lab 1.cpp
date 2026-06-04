#include<iostream>
using namespace std;
    struct student
    {
    string name;
    int rollno;
    float gpa;
    string semester;
    string programname;
    };
    int main(){
    student s1,s2;
    s2.name="azan";
    s2.rollno=33;
    s2.gpa = 3.3;
    s2.semester="fourth semester";
    s2.programname = "object oriented programming";
    cout<<"enter the name";
    cin>>s2.name;
    cout<<"enter the rollno";
    cin>>s2.rollno;
    cout<<"enter the gpa";
    cin>>s2.gpa;
    cout<<"enter the semester";
    cin>>s2.semester;
    cout<<"enter the programname";
    cin>>s2.programname;
    return 0;
	}
