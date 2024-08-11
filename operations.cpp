#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    float divide(float a, float b) { return a / b; } // Simple division check
};

int main()
{
    Calculator calc;

    cout << "Addition: " << calc.add(5, 3) << endl;
    cout << "Subtraction: " << calc.subtract(5, 3) << endl;
    cout << "Multiplication: " << calc.multiply(5, 3) << endl;
    cout << "Division: " << calc.divide(5.0, 3.0) << endl;

    return 0;
}
