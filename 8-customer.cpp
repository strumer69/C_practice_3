#include <iostream>
# include <cstdlib>
using namespace std;
class  Customer
{
    protected:
    float Payment;

    public:

    virtual void Pay(float Payment)
    {
        this-> Payment = Payment;
        cout << "Customer :" << this ->Payment <<endl;

    };
};
class NewCustomer : public Customer
{
    public:void Pay(float Payment )
    {
        this -> Payment =Payment * 0.9;
        cout << "New Customer:" << this ->Payment << endl;
    }

};
class RegularCustomer : public Customer
{
    public:
    void Pay(float Payment)
    {
        this -> Payment = Payment * 0.8;
        cout << "RegularCustomer: "<< this->Payment <<endl;
    }
};
// this-> Takes the property from the own/base class
// without this -> Takes the input parameter

void Cpayment (Customer &Person , float Sum)
{
    Person.Pay(Sum);
}
int main (){
    Customer ali, reza;
    NewCustomer shahram;
    RegularCustomer asadollah , mehrzad;

    Cpayment (ali,50);
    Cpayment (reza,70);

    Cpayment(shahram,100);

    Cpayment(asadollah,200);
    Cpayment(mehrzad,300);
    return 0;


}