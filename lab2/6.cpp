#include <iostream>
#include <cstring> // For strcmp
using namespace std;

int main() {
    char str1[100], str2[100];

    // Input the first string
    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    // Input the second string
    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    // Compare the strings using strcmp
    int result = strcmp(str1, str2);

    if (result == 0) {
        cout << "The two strings are exactly equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }

    return 0;
}
