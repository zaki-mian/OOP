#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    // Print the string forward
    cout << "Forward: " << inputString << endl;

    // Print the string in reverse order
    cout << "Reverse: ";
    for (int i = inputString.length() - 1; i >= 0; i--) {
        cout << inputString[i];
    }
    cout << endl;

    return 0;
}
