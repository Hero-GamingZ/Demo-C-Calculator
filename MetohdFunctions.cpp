#include <iostream>
using namespace std;

void display(string name, int age, bool isMarried){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Married: " << (isMarried ? "Yes" : "No") << endl;

}

string ageIdentifier(int age){
    string status = (age >= 18 && age<= 60) ? "Adult": (age >= 61 && age <= 100) ? "Gen Z":"Gen X" ;
    return status;
}

int main(){
    display("John Doe", 30, true);
    cout<<ageIdentifier(65);
    return 0;
}
