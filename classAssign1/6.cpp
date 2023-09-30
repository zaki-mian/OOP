#include <iostream>
#include <cmath>

using namespace std;

// Function to check 
int is_prime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }

    if (n == 2) {
        return 1; // 2 is prime
    }

    if (n % 2 == 0) {
        return 0; // Even numbers greater than 2 are not prime
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0; // n is divisible by a number other than 1 and itself
        }
    }

    return 1; // n is prime
}

int main() {
    cout << is_prime(19) << endl;  
    cout << is_prime(1) << endl;   
    cout << is_prime(51) << endl;  
    cout << is_prime(-13) << endl; 

    return 0;
}
