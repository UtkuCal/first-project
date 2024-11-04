#include <iostream>
using namespace std;

// Calculator //

int main()
{
	float number1, number2;
	char operation;

	cout << " Write First Number: " << endl;
	cin >> number1;

	cout << " Choose an Operation: (+, -, *, /): " << endl;
	cin >> operation;

	cout << " Write Second Number: " << endl;
	cin >> number2;

	switch (operation)
	{
	case '+':
		cout << number1 << "+" << number2 << " = " << number1 + number2;
		break;
	case '-':
		cout << number1 << "-" << number2 << " = " << number1 - number2;
		break;
	case '*':
		cout << number1 << "*" << number2 << " = " << number1 * number2;
		break;
	case '/':
		cout << number1 << "/" << number2 << " = " << number1 / number2;
		break;

	default:
		cout << "ERROR!!!";
		break;
	}

	return 0;
}