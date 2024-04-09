#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int multiply(int num1, int num2) {
    int multiplication = num1 * num2;
    return multiplication;
}

double division(int num1, int num2) {
    double divisionResult = static_cast<double>(num1) / num2;
    return divisionResult;
}

int substraction(int num1, int num2) {
    int subs = num1 - num2;
    return subs;
}

int main() {
    cout << "Hello People this is a C++ project here in which I made a calculator" << endl;
    cout << "Which perform Addition, Substraction, Multiplication, Division between two numbers" << endl;
  
    int choice;
    int num1, num2;

    cout << "Please Enter the first number: ";
    cin >> num1;

    cout << "Please Enter the second number: ";
    cin >> num2;

    cout << "1. Press 1 for Sum" << endl;
    cout << "2. Press 2 for Substraction" << endl;
    cout << "3. Press 3 for Multiplication" << endl;
    cout << "4. Press 4 for Division" << endl; 

    cin >> choice;
  
    switch (choice) {
        case 1:
            cout << "Sum: " << sum(num1, num2) << endl;
            break;
        case 2:
            cout << "Substraction: " << substraction(num1, num2) << endl;
            break;
        case 3:
            cout << "Multiplication: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Division: " << division(num1, num2) << endl;
            break;
        default:
            cout << "Please enter a valid option (1, 2, 3, 4)" << endl;
    }
  
    return 0;
}
