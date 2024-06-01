#include <iostream>
# include <cstdlib>
using namespace std;
class Polygon
{
    protected:
    int length , width;

    public:
    void setValues(int l , int w){
        length =l;
        width = w;

    }
    //code for virtual:
    // virtual int area(){
    //     return 0;// as mentioned in problem
    // }
    //pure virtual:
    virtual int area()=0;
};

class Rectangle : public Polygon
{
    public:
    int area(){
        return length * width;
    }
};

class Triangle : public Polygon
{
    public:
    int area(){
        return (length*width)/2;
    }
};

int main(){
    // Polygon poly;
    // Rectangle rec;
    // Triangle tri;

    // Polygon *poly1 = &poly;
    // Polygon *poly2 = &rec;
    // Polygon *poly3 =&tri;

    // poly1-> setValues(4,5);// poly itself
    // poly2->setValues(4,5);// rectangle
    // poly3-> setValues(4,5);//triangle

    // cout << poly1->area()<< endl;
    // cout << poly2-> area()<< endl;
    // cout << poly3-> area()<<endl;

    //code for pure virtual function
    Rectangle rec;
    Triangle tri;
    Polygon *poly2=&rec;
    Polygon *poly3 = &tri;
    poly2 ->setValues(4,5);
    poly3 ->setValues(4,5);
    cout << poly2->area()<< endl;
    cout << poly3->area()<< endl;

    return 0;
}