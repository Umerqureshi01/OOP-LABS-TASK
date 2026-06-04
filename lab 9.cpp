#include<iostream>
using namespace std;
class Ride {
	private:
	int rideID;
	double Fare;
	double distance;
	
	static int totalRide;
	static double totalRevenue;
	static double platformTaxRate;
	
	public:
	Ride(int id,double cost) {
	rideID= id;
	Fare = cost;
	distance= cost;
	
	totalRide++;
	totalRevenue += Fare;
    }
    void displayRidedetails() const {
	cout<<"Ride ID: "<< rideID << ", Fare after tax: $"<<Fare<<endl;
	}
	static void viewGlobalstats() {
	cout<<"totalRides: "<< totalRide <<endl;
	cout<<"totalrevenue: "<< totalRevenue <<endl;
	cout<<" platform Tax Rate: "<<  platformTaxRate << "%" <<endl;
	}
	static void setTaxRate(double newRate ) {
	if (newRate>= 0) {
	platformTaxRate = newRate;
	cout<<"platform Tax rate update to"<< platformTaxRate << "%" <<endl;
	} else {
	cout<<"invalid tax rate. must be >= 0."<<endl;
	}
    }
};
    int Ride:: totalRide =0;
    double Ride:: totalRevenue= 0.0;
    double Ride:: platformTaxRate=10.0;
	
	int main () {
	Ride::viewGlobalstats();
	Ride::setTaxRate(12.0);
	
	Ride r1(1,20.0);
	Ride r2(2,35.0);
	
	r1.displayRidedetails();
	r2.displayRidedetails();
	
	cout<<endl;
	Ride::viewGlobalstats();
	
	Ride::setTaxRate(15.0);
	
	Ride r3(3,50.0);
	r3.displayRidedetails();
	cout<<endl;
	Ride::viewGlobalstats();
	
	return 0;
	
	}
