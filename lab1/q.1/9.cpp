#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    int wordLength = word.length();

    for (int i = 0; i < wordLength; i++) {
        cout << word << endl;
    }

    return 0;
}
