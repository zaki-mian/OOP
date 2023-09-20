#include <iostream>
#include <cstdlib> // for rand() function
#include <ctime>   // for seeding random number generator
using namespace std;

// Function to generate random numbers between min and max
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to find the sum of the smallest and largest elements in the array
void findSumOfMinMax(int* arr, int size) {
    if (size <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return;
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    int sum = minVal + maxVal;

    cout << "Smallest value: " << minVal << endl;
    cout << "Largest value: " << maxVal << endl;
    cout << "Sum of smallest and largest: " << sum << endl;
}

int main() {
    int size;

    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1; // Return an error code
    }

    // Dynamically allocate memory for the array
    int* dynamicArray = new int[size];

    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    // Initialize the array with random values
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = getRandomNumber(1, 100); // Assuming a range of 1 to 100
    }

    // Call the function to find and print the sum of smallest and largest values
    findSumOfMinMax(dynamicArray, size);

    // Deallocate the dynamic array to free memory
    delete[] dynamicArray;

    return 0;
}
