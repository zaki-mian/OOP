#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // If characters don't match, it's not a palindrome
        }
        left++;
        right--;
    }
    return true; // If the loop completes without finding a mismatch, it's a palindrome
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    if (isPalindrome(inputString)) {
        cout << inputString << " is a palindrome." << endl;
    } else {
        cout << inputString << " is not a palindrome." << endl;
    }

    return 0;
}
