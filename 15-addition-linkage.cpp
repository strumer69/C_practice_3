#include <iostream>
#include <cstdlib>
using namespace std;
template <class  T>
T doSomething(T,T); // Template class which has two input parameter with any dataType.retrn same data type

int main(){
    int iN1,iN2;
    float fN1,fN2;
    string sN1,sN2;
    int selection;

    cout<< "[1] add two integer values." << endl;
    cout << "[2] add two floating values." <<endl;
    cout << "[3] link a two string"<< endl;
    cout << "selection:";
    cin >> selection;
    cout << endl;
    if(selection ==1){
        cout<< "1. Integer Number:";
        cin >>iN1;
        cout <<" 2. Integer number:";
        cin >> iN2;
        cout << "Result:" << doSomething(iN1,iN2)<< endl;

    }
    else if(selection ==2)
    {
        cout << "1. Floating point number:";
        cin>> fN1;
        cout << "2. Floating point number:";
        cin>> fN2;
        cout<< "result: " <<doSomething(fN1,fN2)<< endl;
    }
    else if( selection ==3)
    {
        cout << "1 . string: ";
        cin >>sN1;
        cout <<" 2. String:";
        cin >>sN2;
        cout << "Result :"<<doSomething(sN1,sN2)<<endl;

    }
    else
    cout <<" wrong Selection "<<endl;
    return 0;
}
template < class T>
T doSomething(T var1, T var2)
{
    return var1 +var2;//add or link both data types
} 