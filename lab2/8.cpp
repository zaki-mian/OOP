#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    // Convert the string to uppercase
    for (char& c : inputString) {
        c = toupper(c);
    }

    cout << "Uppercase string: " << inputString << endl;

    return 0;
}
