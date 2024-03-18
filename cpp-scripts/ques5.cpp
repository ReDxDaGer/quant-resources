#include<iostream>
using namespace std;

int main() {
    const int size = 5;
    int numbers[size];

    // Input elements into the array
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    // Set max and min to zero from default
    int max = numbers[0];
    int min = numbers[0]; 

    // Checking the Max and Min 
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > max) {
            max = numbers[i]; 
        }
        if (numbers[i] < min) {
            min = numbers[i]; 
    }

    // Printing the Max and Min elemnt iside the array
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
