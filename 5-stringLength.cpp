#include <iostream>
using namespace std;
int stringLength (char *);//declare

//definition:
int stringLength (char *w){
int i =0;
while (w[i] !='\0')
    i++;
return i;
}

int main (){
    char word[50];
    cout << "enter a word:"<<endl;
    cin >> word;
    system("clear");
    cout << "length:" << stringLength (word)<<endl;
    return 0;

}