// Input & Operators 

#include<iostream>
using namespace std;

int main() {
	
	int A , B , C ;
	float D; 
	
	cout << "Your Equation is  D = (A + B) / C \n" << endl;
	cout << "Enter A Value : ";
	cin >> A;
	
	cout << "Enter B Value : ";
	cin >> B;
	
	cout << "Enter C Value : ";
	cin >> C;
	
	D = (A+B)/C;
	
	cout << "\n";
	cout << "D = " << A <<" + " << B << " / " << C << " = " << D << endl;
	cout << "\n";
	cout << "So Your Final Answer is : " << D;
}