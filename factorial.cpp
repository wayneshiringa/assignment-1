#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int result = 1;  // Start with a result of 1 
    
    // Loop to multiply numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result *= i;  // Multiply result by current value of i
    }
    
    return result;  // Return the calculated factorial
}

int main() {
    int num;  // Declare an integer variable to hold the user input
    
    cout << "Enter a positive integer: ";  
    cin >> num;  // Read the user's input into num

    // Check if the input is negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;  // Display an error message
    } else {
        // If the number is positive calculate 
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0; 
}
