#include "cstdlib"
#include "iostream"
using namespace std;

 class Phone {
    protected:
    string color;//, firstname;
    int number;
    public:
    Phone(string c, int no): color (c) , number(no){}

    //  string f): surname(s), firstname(f){}
    //  void displayData()=0;
    virtual void displayData(){
    // void displayData(){
        cout << " phone " << endl;
        cout << " color :" << color  << " phone number " << number <<endl;
    }
 };
 class  CablePhone : public Phone{
    private :
    int cableLength;
    public:
    CablePhone(string c, int no, int cl): Phone(c,no), cableLength(cl){}
    void displayData(){
        cout << "cablePhone" << endl;
        cout <<"color " <<color << " phone numberr" << number;
        cout  << " cable length " << cableLength<< cableLength << " meter " <<endl;
    }
 };
 class MobilePhone : public Phone{
    private:
    string network;
    public:
    MobilePhone(string c, int no, string n): Phone(c,no),network(n){}
    void displayData(){
        cout << " Mobile Phone " << endl;
        cout << " color :" << color  << " Phone number" << number<< endl;
        cout << " Network "<< network << endl;
    }
 };

 int main (){
    Phone *p = new Phone("Black ", 11111);
    CablePhone *cp= new CablePhone(" blue" , 22222, 50);
    MobilePhone *mp = new MobilePhone(" white", 3333, "3g");
    p->displayData();
    p=cp;
    p->displayData();
    p=mp;
    p->displayData();
    return 0;
 }