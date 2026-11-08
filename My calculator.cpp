#include <iostream>
using namespace std;
int main () {
	int Num1,Num2;
	int Addition , subtraction;
	int Multiplication ,Division , Reminder;
	cout<<"==== MY CALCULATOR ===="<<endl;
	
	cout<<"Enter the first No :"<<endl;
	cout<<"Enter the second No:"<<endl;
	cin>>Num1;
	cin>>Num2;
	Addition = Num1 + Num2;
		subtraction = Num1 - Num2;
			Multiplication = Num1 * Num2;
				Division = Num1 / Num2;
					Reminder = Num1 % Num2;
					
					cout<<"==== RESULTS ===="<<endl;
					
					cout<<"Addition:"<<Addition<<endl;
		cout<<"subtraction :"<<subtraction<<endl;
			cout<<"Multiplication :"<<Multiplication<<endl;
				cout<<"Division:"<<Division<<endl;
				cout<<"Reminder:"<<Reminder<<endl;

	return 0;
	
}
