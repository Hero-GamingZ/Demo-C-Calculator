#include <iostream>
using namespace std;

class Shoe {
public:
    string brand;
    double size;
    string color;
    double price;
    string type;

    // Member function to initialize shoe details
    void show(string b, double s, string c, double p, string tos) {
        brand = b;
        size = s;
        color = c;
        price = p;
        type = tos;
    }

    // Member function to display shoe details
    void displayshoe() {
        cout << "Brand: " << brand << endl;
        cout << "Size: " << size << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "Type: " << type << endl;
    }
};

int main() {
    Shoe myshoe;
    myshoe.show("Nike", 9.5, "Black", 100.00, "Running"); // Initialize the shoe details
    myshoe.displayshoe(); // Call the member function to display details

    return 0;
}
