# include <iostream>
# include <cstdlib>
using namespace std;
class Vehicle
{
    private:
    string brand;
    string licencePlate;
    int ps;
    int yearsOfConstruction;
    public:

    // costructor with member initialization list
    Vehicle(string b, string l, int p, int cy):brand(b), licencePlate(l),ps(p),yearsOfConstruction(cy){}
    
    //function to display data
    void displayData()
    {
        cout <<"brand "<< brand<< endl;
        cout << "Licens plate "  << licencePlate<< endl;
        cout << " number of ps : " << ps <<endl;
        cout << " year " << yearsOfConstruction<<endl;
    }

    string getBrand(){return brand;}
    string getLicensplate (){return licencePlate;}
    int getPS(){ return ps;}
    int getYear(){return yearsOfConstruction;}


    //operator <= is overloaded as member function
    void operator <= (Vehicle v1){
        if(this -> yearsOfConstruction <v1.yearsOfConstruction){
            cout << " Vehicle "<< this->getBrand()<< " is older than "<<v1.getBrand()<<endl;
        
        }else if(this->yearsOfConstruction>v1.yearsOfConstruction){
            cout << " vhicle " << this->getBrand() << " is newer than " << v1.getBrand()<<endl;
        }else {
            cout << "  Both vehicles are the same age"<< endl;
        }

    }

};

// Operator Overloading: 
//operator == is overloaded
//the function is declared as an external function of the class
void operator == (Vehicle v1,Vehicle v2){
    if(v1.getBrand()== v2.getBrand() && 
    v1.getLicensplate()== v2.getLicensplate()&&
    v1.getPS()==v2.getPS()&&
    v1.getYear()==v2.getYear()){
        cout << "they are the same vehicles "<< endl;

    }else{
        cout << " they are not the same vehicles"<< endl;
    }
}
int main ()
{
    //create instances
    Vehicle fz1("Opel" ," Pa aa 333" , 66, 1999);
    Vehicle fz2 ("bmw", "deg dd 32" ,103 , 2005);

    //call comparative operator
    fz1==fz2;

    //greater than / less than operator
    fz1<=fz2;

    return 0;


}