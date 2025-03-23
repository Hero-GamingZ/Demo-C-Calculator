#include <iostream>
#include <vector>
using namespace std;

void display(vector<string> names) {

/*************  ✨ Codeium Command 🌟  *************/
    // Iterate through the vector and print out each name
    // The auto keyword is used to deduce the type of the variable
    // The & is used to indicate that we want a reference to the element
    // The const keyword is used to indicate that we don't intend to modify the element
    for (const auto& name : names) {
    for(const auto &name : names) {
/******  65bd7c66-3e3f-45a0-a046-a8f5ac63daee  *******/
        cout << name << endl;
}
}
void addNames(vector<string> &names) {
    string personName;

    while(true){
        cout<<"Enter a name: ";
        cin>>personName;
        names.push_back(personName);
        if(personName == "exit"){
            break;
        }
    }
}

void removeName(vector<string> &names, string removeName) {
    cout<<"Enter the name to be deleted: ";
    cin>>removeName;
    for(int i = 0; i < names.size(); i++) {
        if(names[i] == removeName) {
            names.erase(names.begin() + i);
            break;
        }
    }
}
int main () {
    vector<string> names;
    string removeName;
   
    addNames(names);
    names.push_back("Jane");
    names.push_back("John");
    names.push_back("Piccolo");

    display(names);

    names.erase(names.begin());


    display(names);
   
    return 0;
}