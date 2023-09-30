#include <iostream>

using namespace std;

// Function to reverse 
void reverse(float arr[], int length) {
    int start = 0;
    int end = length - 1;

    // Swap elements 
    while (start < end) {
        
        float temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    
    float myArray[] = {5.8, 2.6, 9.0, 3.4, 7.1};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Original Array: ";
    for (int i = 0; i < length; i++) {
        cout << myArray[i] << " ";
    }

    // Call the reverse function
    reverse(myArray, length);

    cout << "Reversed Array: ";
    for (int i = 0; i < length; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
}
