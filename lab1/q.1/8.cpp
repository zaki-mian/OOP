#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int number = 3; number <= 100; number += 2) {
        if (number % 10 != 0) {
            sum += (number * number);
        }
    }

    cout << "Sum of squares of odd numbers between 2 and 100 (skipping numbers where number / 10 == 0): " << sum << endl;

    return 0;
}
