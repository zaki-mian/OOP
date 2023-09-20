#include <iostream>
using namespace std;

void displayFibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    cout << "Fibonacci Series up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; ++i) {
        // Display the current Fibonacci number (a)
        cout << a << " ";

        // Calculate the next Fibonacci number
        nextTerm = a + b;

        // Update values for the next iteration
        a = b;
        b = nextTerm;
    }
}

int main() {
    int terms;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Number of terms should be greater than 0." << endl;
        return 1; // Return an error code
    }

    displayFibonacci(terms);

    return 0;
}
