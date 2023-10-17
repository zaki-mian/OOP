#include <iostream>
#include <string>
using namespace std;

class myString {
    string str;
public:
    void inputString() {
        cout << "Enter a string: ";
        getline(cin, str);
    }
    void CountConsonants() {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (isalpha(str[i]) && !isVowel(str[i])) {
                count++;
            }
        }
        cout << "Total number of consonants: " << count << endl;
    }
    void VowelCount() {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (isVowel(str[i])) {
                count++;
            }
        }
        cout << "Total number of vowels: " << count << endl;
    }
    void Palindrome() {
        string revStr = str;
        reverse(revStr.begin(), revStr.end());
        if (str == revStr) {
            cout << "The string is a palindrome." << endl;
        }
        else {
            cout << "The string is not a palindrome." << endl;
        }
    }
private:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};

int main() {
    myString strObj;
    strObj.inputString();
    strObj.CountConsonants();
    strObj.VowelCount();
    strObj.Palindrome();
    return 0;
}
