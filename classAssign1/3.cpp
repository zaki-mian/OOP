#include <iostream>
using namespace std;

// Function to calculate the sum of integers 
int sum_from_to(int first, int last) {
    int sum = 0;
    
    for (int i = first; i <= last; i++) {
        sum += i;
    }
    
    return sum;
}

int main() {
    
    int first = 4;
    int last = 7;
    
    int result = sum_from_to(first, last);
    
    cout << result << endl;

    return 0;
}
