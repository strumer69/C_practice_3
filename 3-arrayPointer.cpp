#include <iostream>
#include <cstdlib>
using namespace std;

void increment_all (int * start, int * stop)
{
    int*current = start;
    while (current !=stop){
        ++ (*current);
        ++current;
    }
}
void print_all (const int* start , const int* stop)
{
    const int* current =start;
    while (current !=stop){
        cout << * current << '\n';
        ++current;
    }
}
int main (){
    int numbers[]={10,20,30};
    increment_all(numbers , numbers+3); // pointers of start and end are 2 input arguments
    print_all(numbers, numbers+3);

}
