#include <iostream>
#include <cmath>
using namespace std;

class complexCal {
    public:
    double getSquareRoot(double num) {
        if (num < 0) {
            return 0;
        } else {
            return sqrt(num);
        }
    }

    int getFactorial(int num) {
        if (num < 0) {
            return 0;
        } else {
            int ans = 1;
            for (int i = num; i > 0; i--) {
                ans *= i;
            }
            return ans;
        }    
    }

    double getSum(double num1, double num2) {
        return num1 + num2;
    }

    double getDifference(double num1, double num2) {
        return num1 - num2;
    }

    double getProduct(double num1, double num2) {
        return num1 * num2;
    }

    double getQuotient(double num1, double num2) {
        if (num2 == 0) {
            return 0;
        } else {
            return num1 / num2;
        }
    }
};

int main() {
    complexCal cal;
    cout << cal.getSquareRoot(4) << endl;
    cout << cal.getFactorial(5) << endl;
    cout << cal.getSum(3, 4) << endl;
    cout << cal.getDifference(3, 4) << endl;
    cout << cal.getProduct(3, 4) << endl;
    cout << cal.getQuotient(3, 4) << endl;
    return 0;
}
