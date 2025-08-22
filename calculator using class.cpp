/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
class Calculator {
    public:
    int a;
    int b;
    int add() {
        return a + b;
    }
    int subtract() {
        return a - b;
    }
};

int multiply(Calculator calc) {
    return calc.a * calc.b;
}

float divide(Calculator calc) {
    if (calc.b!=0){
        return calc.a/calc.b;
    }
    else {
        cout << "Division by zero is not allowed." << endl;
        return 0; 
    }
}

int main() {
    Calculator calc;
    cout << "Enter first number: ";
    cin >> calc.a;
    cout << "Enter second number: ";
    cin >> calc.b;

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << multiply(calc) << endl;
    cout << "Division: " << divide(calc) << endl;

    return 0;
}

/*Output
Enter first number: 8
Enter second number: 2
Addition: 10
Subtraction: 6
Multiplication: 16
Division: 4
*/