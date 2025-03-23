#include <iostream>
using namespace std;
class Number {
public: 
    int a, b;

    void numDisplay(int a, int b) {
        cout<< a << " " << b << endl;
    }

};

int main() {
    Number num1, num2;

    num1.numDisplay(1, 2);
    num1=num2;
    num2.numDisplay(3, 4);

    return 0;
}