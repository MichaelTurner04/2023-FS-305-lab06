//Michael Turner
//18229090
//10-4-2023
//lab:305
//lab6-2.cpp

#include <iostream>
using namespace std;

int main (){
	char operation;
	float num1;
	float num2;
	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter two numbers:";
	cin >> num1 >>num2;
	switch(operation){
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2<< endl;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2<< endl;
		break;
	case '/':
		if(num2 == 0) {
			cout << "Error: num2 cannot be 0"<< endl;
			break;
		}
		else{
		cout << num1 << " / " << num2 << " = " << num1 / num2<< endl;
		break;
		}
	default:
		cout << "Invalid operation"<< endl;
	}
	return 0;
}
