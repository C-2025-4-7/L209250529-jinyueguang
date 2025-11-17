#include <iostream>

using namespace std;

int main() {
	do {
		char sign;
		double a, b;
		cout << "Enter a sign (+ - * /) and e for exit: ";
		cin >> sign;
		if (sign == 'e') break;	
		cout << "Enter two numbers: ";
		cin >> a >> b;
		switch (sign) {
			case '+':
				cout << "Result: " << a + b << endl;
				break;
			case '-':
				cout << "Result: " << a - b << endl;
				break;
			case '*':
				cout << "Result: " << a * b << endl;
				break;
			case '/':
				if (b != 0)
					cout << "Result: " << a / b << endl;
				else
					cout << "Error: divident cannot be 0" << endl;
				break;
			default:
				cout << "Error: Invalid sign!" << endl;
		}
		
	} while (1);
}