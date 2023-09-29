#include <iostream>
#include <cstring> // For strlen
using namespace std;

bool isPalindrome(const char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false; // If characters don't match, it's not a palindrome
        }
    }
    return true; // If the loop completes without finding a mismatch, it's a palindrome
}

int main() {
    char word[100]; // Assuming a maximum word length of 100 characters
    
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
