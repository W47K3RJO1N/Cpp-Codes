#include <bits/stdc++.h>
using namespace std;

void calculator()

{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Result = " << num1 + num2;
        break;

    case '-':
        cout << "Result = " << num1 - num2;
        break;

    case '*':
        cout << "Result = " << num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Error! Division by zero.";
        break;

    default:
        cout << "Invalid operator!";
    }
}

int main() {
    calculator();
    return 0;
}