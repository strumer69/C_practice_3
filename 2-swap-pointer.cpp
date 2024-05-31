#include <iostream>
#include <cstdlib>
using namespace std;

//declare
void swap(int *a,int*b);
void simpleSwap(int a,int b);

//definition
void swap(int *a , int *b){
    int c= *a;
    *a=*b;
    *b=c;
}
void simpleSwap(int a, int b){
    int c= a;
    a=b;
    b=c;
}
int main (){
int a,b;
cout << "what is a:" <<endl;
cin >> a;
cout << "what is b:" << endl;
cin >>b;
cout << a << "&" << b<<endl;
cout << "swap a , b "<<endl;
swap (a,b);
cout<<a << "&" <<b<<endl;
simpleSwap(a,b);
cout<<a << "&" <<b<<endl;

}
