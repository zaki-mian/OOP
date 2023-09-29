#include <iostream>
#include <cstring> // For strncmp
using namespace std;

int main() {
    char str1[100], str2[100];
    int n;

    // Input the first string
    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    // Input the second string
    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    // Input the number of characters to compare
    cout << "Enter the number of characters to compare: ";
    cin >> n;

    // Compare the strings using strncmp
    int result = strncmp(str1, str2, n);

    if (result < 0) {
        cout << "The first string is less than the second string." << endl;
    } else if (result == 0) {
        cout << "The first string is equal to the second string." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}
