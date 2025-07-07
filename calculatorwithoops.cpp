#include <iostream>
#include <conio.h>  // optional; see note below
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero. Math doesn't work like that." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    char op;

    cout << "Choose operation (+, -, *, /): ";
    op = getche();  // works on Windows; otherwise replace with cin >> op;
    cout << endl;

    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+':
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
