#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
    public:
    virtual double area()  = 0;

};
class circle: public Shape
{
    
    
    public:
    double radius;
    
    circle(double r){
        radius=r;
    }


    double area() {
         return M_PI*radius*radius;
        


    }
};
class rectangle: public Shape
{
    public:
    double width;
    double length;
    rectangle(double w, double l){
        width=w;
        length=l;
    }

    
    
    double area() {
        return width*length;

    }


};
int main(){
    double r,l,w;
    cout<<"Enter radius";
    cin>>r;

    cout<<"Enter width";
    cin>>w;

    cout<<"Enter length";
    cin>>l;

    circle c1(r);
    rectangle r1(w, l);

    cout<<"Area of circle"<<c1.area()<<endl;
    cout<<"Area of rectangle"<<r1.area()<<endl;

    return 0;



}
