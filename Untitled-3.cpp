#include <iostream>
using namespace std;

class Person
{
    private:
    int age;
    string name;

    public:

   Person(string n, int a){
       name = n;
       age = (a > 0) ? a : 1;
   }
   string getName(){
       return name;
   }
   int getAge(){
       return age;
   }

   void display(){
       cout << "Name: " << name << endl;
       cout << "Age: " << age << endl;
   }

};

/*************  ✨ Codeium Command ⭐  *************/
/**
 * This is the main function that creates two Person objects, p1 and p2.
 * It demonstrates the use of the Person class by initializing p1 with valid age data
 * and p2 with invalid age data to show the default age assignment.
 * It displays the details of p1 using the display method.
 */


/******  f9f03fbd-5dcf-4412-a965-12f44d52d6f0  *******/
int main()
{
    Person p1("Lance", 20), p2("Lance", -20);
    p1.display();
    p2.display();
    return 0;
}