#include <iostream>
using namespace std;

// Function to print Fibonacci sequence up to n terms
void fibonacci(int n) {
    long long a = 0, b = 1, next;  // Initializing  the first two Fibonacci numbers 

    cout << "Fibonacci Sequence: ";

    // Loop to print the first n terms sequence
    for (int i = 0; i < n; i++) {
        // Special handling for the first term (0)
        if (i == 0)
            cout << a << " ";  // Print the first term (0)
        // Special handling for the second term (1)
        else if (i == 1)
            cout << b << " ";  // Print the second term (1)
        else {
            next = a + b;  // Calculate the next Fibonacci number by adding the previous two
            cout << next << " ";  // Print the next Fibonacci number
            a = b;  // Update 'a' to the previous Fibonacci number (b)
            b = next;  // Update 'b' to the newly calculated Fibonacci number
        }
    }
    cout << endl;  // Print a newline after the sequence to format output
}

int main() {
    int num;

    // Ask the user to input the number of terms they want in the Fibonacci sequence
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> num;  // Read the user's input into the variable 'num'

    // Check if the entered number is a valid positive integer
    if (num <= 0) {
        // If the number is non-positive, prompt the user to enter a valid number
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        // If the number is valid, call the fibonacci function to print the sequence
        fibonacci(num);  // Call the fibonacci function with the user-specified number of terms
    }

    return 0;  // Return 0 to indicate successful execution
}
