#include <iostream>
using namespace std;

// Function to increment the values by 1
void change(int &a, int &b, int &c) {
    a++;
    b++;
    c++;
}

int main() {
    int num1, num2, num3;

    do {
        cout << "Enter three numbers that satisfy the condition (Num / 5 % 7 == 0):" << endl;
        cin >> num1 >> num2 >> num3;

        if ((num1 % 5 == 0) && (num2 % 5 == 0) && (num3 % 5 == 0) &&
            (num1 % 7 == 0) && (num2 % 7 == 0) && (num3 % 7 == 0)) {
            break; // Numbers satisfy the condition, exit the loop
        } else {
            cout << "Input values do not satisfy the condition. Please try again." << endl;
        }
    } while (true);

    // Call the 'change' function to increment the values
    change(num1, num2, num3);

    cout << "Updated values: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}
