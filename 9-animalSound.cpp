#include <iostream>
#include <cstdlib>
using namespace std;

class Animal{
    protected:
    string name;
    public:
    Animal(string n): name(n){};
    string getName(){ return name;}
    virtual void makeSound()=0; // purely Virtual

};

class Cow : public Animal{
    public :
    Cow(string n):Animal(n){};
    void makeSound(){
        cout << " Moo"<<endl;
    }
};

class Dog : public Animal{
    public:
    Dog(string n): Animal(n){};
    void makeSound()
    {
        cout << "Woof"<< endl;
    }
};

int main(){
    Cow k("Betsy");
    Dog h("Bello");

    cout <<k.getName()<< " makes ";
    k.makeSound();
    cout << h.getName()<< " makes ";
    h.makeSound();

    return 0;
}