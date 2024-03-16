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
        }
}

int main() {
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    int primeCount = 0;
    for (int i = 2; i <= userInput; ++i) {
        if (isPrime(i)) {
            primeCount++;
        }
    }

    cout << "There are " << primeCount << " prime numbers between 2 and " << userInput << std::endl;

    return 0;
}

