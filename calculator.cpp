#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

  cout << "==============================" << endl;
  cout << "       SIMPLE CALCULATOR      " << endl;
  cout << "==============================" << endl;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter operator (+, -, *, /): ";
  cin >> op;
  cout << "Enter second number: ";
cin >> num2;

cout << "\n--- Result ---" << endl;

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
        } else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
    } else {
        cout << "Error: Invalid operator entered!" << endl;
    }

    return 0;
}
