#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of elements should be greater than 0." << endl;
        return 1; // Return an error code
    }

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the smallest and largest numbers in the array
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    // Swap the smallest and largest numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] == smallest) {
            arr[i] = largest;
        } else if (arr[i] == largest) {
            arr[i] = smallest;
        }
    }

    cout << "Array after swapping:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Deallocate the dynamically allocated memory
    delete[] arr;

    return 0;
}
