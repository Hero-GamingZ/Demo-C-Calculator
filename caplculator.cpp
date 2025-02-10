#include <iostream>
using namespace std;

int main (){
	
	double No1, No2, Solved;
	string Choice;
	char Operation;
	string RChoice;
	
	do{
	cout<<"+: Addition"<<endl<<"-: Subtraction"<<endl<<"*: Multiplication"<<endl<<"/: Division"<<endl;
	cout<<"Choose Operation: ";
	cin>> Operation;
	cout<<endl<<endl;
	
	cout<<"Input First Number: ";
	cin>> No1;
	cout<<"Input Second Number: ";
	cin>> No2;
	cout<<endl<<endl;

	if(Operation == '+'){
		Solved=No1+No2;
		cout<<"Sum: "<<Solved; 
	}
	else if (Operation=='-'){
		Solved=No1-No2;
		cout<<"Difference: "<<Solved; 
	}
	else if (Operation=='*'){
		Solved=No1*No2;
		cout<<"Product: "<<Solved; 
	}
	else if (Operation=='/'){
		Solved=No1/No2;
		cout<<"Quotient: "<<Solved; 
	}
	cout<<endl<<endl;
	
	cout<<"Repeat[Y/N]: ";
	cin>>RChoice;
}while (RChoice == "Y");

return 0;
}

