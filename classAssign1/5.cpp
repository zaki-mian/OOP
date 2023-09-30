#include <iostream>

using namespace std;

// Function to swap the values 
void swap_floats(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    float x = 5.8, y = 0.9;

    swap_floats(x, y);

    cout << x << " " << y << endl; 

    return 0;
}
