#include<iostream>
#include<cmath>
using namespace std;
class shape {
	public:
	virtual double area() const = 0;
	virtual ~shape() {}
	};
	class rectangle : public shape {
	private:
	double width,height;
	public:
	rectangle(double w,double h) : width(w), height(h) {}
	
	double area() const override {
	  return width*height;
    }
	};
	class circle : public shape {
	private:
	double radius;
	public:
	circle(double r) : radius(r) {}
	double area () const override {
	 return M_PI * radius * radius;
}
	};
	int main(){
	shape* shape[2];
	shape[0]=new rectangle(7.0,8.9);
	shape[1]=new circle(9.0);
	
	
	cout<<"rectangle area: "<< shape[0]->area() <<endl;
	cout<<"circle area: "<<shape[1]->area() <<endl;
    for (int i=0;i<2;i++) {
    delete shape[i];
	}
    return 0;
	}
	
	
