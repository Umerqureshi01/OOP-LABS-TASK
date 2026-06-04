#include<iostream>
#include<cstring>
using namespace std;
class Employee {
	private:
	int id;
	double* salary;
	
	public:
	Employee(int id,double sal) {
	this->id = id;
	salary = new double(sal);
	}
	
	Employee shallowCopy(Employee& other) {
	Employee temp(other);
	return temp;
	}
	Employee(const Employee& other) {
	id = other.id;
	salary = new double(*other.salary);
	}
	void setSalary(double newSal) {
	*salary = newSal;
	}
	void display() {
	cout<<"ID: "<<id<<",Salary: "<< *salary <<endl;
	}
	~Employee() {
	if (salary != NULL) {
	delete salary;
	salary = NULL;
	    }
	}
};
    int main() {
    cout<<"shallow copy vs deep copy demo"<<endl;
    cout<<"\n1.DEMONSTRATION SHALLOW COPY"<<endl;
    Employee emp1(101,500000.0);
    cout<<"Emp1 (original): "<<endl;
    emp1.display();
    cout<<"Creating a variable that points to Emp1 memory....(simulating shallow copy risk)"<<endl;
    Employee *ptrEmp2 = &emp1;
    cout<<"Modifying Emp1 salary to 60000....."<<endl;
    emp1.setSalary(60000.0);
    
    cout<<"Emp1: "<<endl;
    emp1.display();
    cout<<"Notice that because this is 'shallow', changing Emp1 affects anything pointing to it."<<endl;
    
    cout<<"\n2.DEMONSTRATION DEEP COPY"<<endl;
    Employee emp3(102,70000.0);
    cout<<"Emp3 (original): "<<endl;
    emp3.display();
    
    Employee emp4 = emp3;
    cout<<"Emp4 (deep copy): "<<endl;
    emp4.display();
    
    cout<<"\n updating salary of beep copied object (Emp4) to 9000..."<<endl;
	emp4.setSalary(90000.0);
	 
	cout<<"Emp3 (original) - should be unchanged): "<<endl;
	emp3.display();
	cout<<"Emp4 (deep copy - should be changed): "<<endl;
	emp3.display();
	cout<<"\n conclusion: deep copy allocates separate memory,so changes are isolated."<<endl;
	
	return 0;
	}
