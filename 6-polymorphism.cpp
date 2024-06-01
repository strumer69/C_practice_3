#include "cstdlib"
#include "iostream"
using namespace std;

 class Person {
    protected:
    string surname, firstname;
    public:
    Person(string s, string f): surname(s), firstname(f){}
    virtual void displayData()=0;
    
    // virtual void displayData(){
    //     cout << "surname:" << surname<<
    //     "firstname:" << firstname<<endl;
    // }
    
 };
 class Student : public Person{
    private :
    string matno;
    public:
    Student(string s,string f, string no): Person (s,f), matno(no){}
    void displayData(){
        cout << "student1:" << surname << firstname ;
        cout <<"matriculation :"<<matno<< endl;
    }
 };

int main (){
    // Person p (" ali ", " moradi ");
    // Student s(" reza " , " zare " , " 252525");
    // p.displayData();
    // s.displayData();
    Student *s = new Student(" amir ", " rezaee "," 2145 ");
    Person * p = s;
    // Student *k;
    // k = &s;
    p-> displayData();
    return 0;
}