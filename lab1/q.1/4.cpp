// without function
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is " << factorial << endl;
    }

    return 0;
}


// Function to calculate the factorial
int calculateFactorial(int num) {
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; // Return an error code
    }
    
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int result = calculateFactorial(num);

    if (result != -1) {
        cout << "Factorial of " << num << " is " << result << endl;
    }

    return 0;
}
 
