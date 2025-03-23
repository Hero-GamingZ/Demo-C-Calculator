#include <iostream>
#include <vector>
using namespace std;

class Students{
    private:
    string name;
    string section;

    public:
    Students(string name, string section){
        this->name = name;
        this->section = section;
    }
   
    string getName(){ // Atleast one Getter function is needed
        return name;
    }
 

    void display(){
        cout << "Name: " << name << endl;
        cout << "Section: " << section << endl;
        cout << "----------------" << endl;
    }
};

int main(){
    string studentName;
    string studentSection;
    string removeName;
    vector<Students> students;
    while (true){
        cout << "Enter a name: ";
        cin >> studentName;
        if (studentName == "exit"){
            break;
        }
        cout << "Enter a section: ";
        cin >> studentSection;
        students.push_back(Students(studentName, studentSection));
    }
    cout << "----------------" << endl;
for(int i = 0; i < students.size(); i++){
        students[i].display();
    }
while (true)
{
    cout << "Enter the name to be deleted: ";
    cin >> removeName;
    cout << "----------------" << endl;
    if (removeName == "exit"){
        break;
    }
    for(int i = 0; i < students.size(); i++){
        if(students[i].getName() == removeName){
            students.erase(students.begin() + i);
            break;
        }
    }
}
    
    for(int i = 0; i < students.size(); i++){
        students[i].display();
    }

    return 0;
}