#include "cstdlib"
#include "iostream"
using namespace std;

class Vehicle
{
protected:
string brand;
string licencePlate;
int ps;
int constructionYear;

public:

//default constructor
Vehicle() {}

//constructor with member initialization list
Vehicle(string br, string licence, int ps, int cy): brand(br), licencePlate(licence), ps(ps), constructionYear(cy) {}

void displayData(){
cout << "Brand: " << brand << endl;
cout << "Licence Plate: " << licencePlate << endl;
cout << "PS: " << ps << endl;
cout << "Construction Year: " << constructionYear << endl;
}

void setBrand(string br) { brand = br; }
void setLicencePlate (string licence) { licencePlate = licence; }
void setPS (int p) { ps = p; }
void setConstructionYear (int cy) { constructionYear = cy; }

};

class Car: public Vehicle {
private:
float maxSpeed;
public:
Car() {}
Car(string br, string licence, int ps, int cy, float max): Vehicle(br, licence, ps, cy), maxSpeed(max) {}
void displayData(){
Vehicle::displayData();
cout << "Maximum Speed: " << maxSpeed << endl;
}
void setMaxSpeed(float max) { maxSpeed = max; }

};

class Truck: public Vehicle {
private:
float maxLoad;
int numberWheels;
public:
Truck() {}
Truck(string br, string licence, int ps, int cy, float max, int no): Vehicle(br, licence, ps, cy), maxLoad(max), numberWheels(no) {}

void displayData(){
Vehicle::displayData();
cout << "Maximum Load: " << maxLoad << endl;
cout << "Number of Wheels: " << numberWheels << endl;
}

void setMaxLoad (float max) { maxLoad = max;}
void setNumberWheels(int anz) { numberWheels = anz; }

};

int main(){

Car car;
Car *p1;

p1 = &car;

p1->setBrand("Opel");
p1-> setLicencePlate("KA WA 11");
p1-> setPS(2004);
p1-> setConstructionYear(78);
p1->setMaxSpeed(200);

Truck truck;
Truck *l1;
l1 = &truck;

l1->setBrand("Mercedes");
l1->setLicencePlate("WA SS 44");
l1->setPS(99);
l1->setConstructionYear(2007);
l1-> setMaxLoad(5.4);
l1->setNumberWheels(8);

p1->displayData();
l1->displayData();

system("pause");
return 0;
}; 