#include <iostream>
#include <cmath>
using namespace std;

class AreaCalculator {
    public:
        double areaT(double base, double height){
            double area =  (base * height)/2;
            return area;
        }
        double areaR(double length, double width){
            double area = length * width;
            return area;
        }
        double areaC(double radius){
            double area = M_PI * pow(radius, 2);
            return area;
        }
};

int main(){
    AreaCalculator ac;
    cout<<"Area of Rectangle: "<<ac.areaR(5, 10)<<endl;
    cout<<"Area of Circle: "<<ac.areaC(5)<<endl;
    cout<<"Area of Triangle: "<<ac.areaT(5, 10)<<endl;
}

