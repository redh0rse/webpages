#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    public:
        virtual float Calculate_Area(){
            cout<<"Calculate area of shapes"<<endl;
            return 0;
        }
};
class Rectangle: public Shape{
    float length, breadth;
    public:
        virtual float Calculate_Area(float l, float b){
            length = l;
            breadth = b;
            return length* breadth;
        }
};
class Circle: public Shape{
    float radius;
    public:
        virtual float Calculate_Area(float r){
            radius = r;
            return M_PI * radius * radius;
        }
};
int main(){
    Shape obj;
    obj.Calculate_Area();
    Rectangle obj1;
    cout<<"Area of rectangle is: "<<obj1.Calculate_Area(5.2,3)<<endl;
    Circle obj2;
    cout<<"Area of rectangle is: "<<obj2.Calculate_Area(5)<<endl;
    return 0;
}