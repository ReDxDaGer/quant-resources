#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true; // Added return statement for the case where num is prime
}
int main() {
    int a, b;
    cout << "Hello, please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;

    for (int num = a; num <= b; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}

