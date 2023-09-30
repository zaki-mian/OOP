#include <iostream>

using namespace std;

// Function 
int enough(int x) {
    int n = 1;  // Start with n=1
    int sum = 0;

    while (sum < x) {
        sum += n;
        n++;
    }

    return n - 1;
}

int main() {
    // Example 
    int result1 = enough(9);
    int result2 = enough(21);

    cout << result1 << endl; 
    cout << result2 << endl; 

    return 0;
}
