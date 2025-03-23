#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
public:
    Person() : firstName(""), lastName("") {}
    string getFullName() {
        return firstName + " " + lastName;
    }
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }
    void setLastName(string lastName) {
        this->lastName = lastName;
    }
};

class Section {
private:
    string sectionName;
    Person person;
public:
    void setSection(string sectionName) {
        this->sectionName = sectionName;
    }
    string getSection() {
        return sectionName;
    }
    void displayGreeting() {
        cout << "Hello " << person.getFullName() << " from " << sectionName << endl;
    }
    void setPersonFirstName(string firstName) {
        person.setFirstName(firstName);
    }
    void setPersonLastName(string lastName) {
        person.setLastName(lastName);
    }
};

class MainProgram {
private:
    Section section;
public:
    int main() {
        string firstName, lastName, sectionName;
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter section name: ";
        cin >> sectionName;
        section.setSection(sectionName);
        section.setPersonFirstName(firstName);
        section.setPersonLastName(lastName);
        section.displayGreeting();
        return 0;
    }
};

int main() {
    MainProgram program;
    return program.main();
}