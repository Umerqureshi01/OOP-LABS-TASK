#include<iostream>
using namespace std;
class person{
	public:
	string name;
	string address;
	float height;
	
	
	void setdata(){
	cout<<"enter name "<<endl;
	cin>>name;
	cout<<"enter address "<<endl;
	cin>>address;
	cout<<"enter height "<<endl;
	cin>>height;
	}


    void display(){
    
	cout<<name<<endl;
	cout<<address<<endl;
    cout<<height<<endl;
	}
};
class student:public person{
	public:
	int rollnum;
	float gpa;
	string offersubject;
	char grade;
void getdata(){
	cout<<"enter roll num";
	cin>>rollnum;
	cout<<"enter gpa";
	cin>>gpa;
	cout<<"enter grade";
	cin>>grade;
	cout<<"subjectoffer";
	cin>>offersubject;
	}
	
	void display(){
	cout<<rollnum;
	cout<<gpa;
	cout<<grade;
	cout<<offersubject;
    }
};


class teacher:public person{
	public:
	string course;
	int id;
	
	void setdata(){
	cout<<"enter course"<<endl;
	cin>>course;
	cout<<"enter id"<<endl;
	cin>>id;}
	
	void display(){
	cout<<course<<endl;
	cout<<id<<endl;
}
};
	
	

int main(){
	student s;
	s.getdata();
	s.display();
	s.setdata();
	s.display();
	teacher t1;
	t1.setdata();
	t1.display();
}


