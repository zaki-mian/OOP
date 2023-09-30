#include <iostream>
using namespace std;
int main(){
    //1
// int n = 3;
// while (n >= 0)
// {cout << n * n << endl;
// --n;}
// return 0;

//2

//  int i = 5, j = 6, k = 7, n = 3;
// cout << i + j * k - k % n << endl;
// cout << i / n << endl;

//3

// Rewrite the following code fragment so that it uses a "do...while..." loop to accomplish the same
// task.
// int n;
// cout << "Enter a non-negative integer: ";
// cin >> n;
// while (n < 0)
// {
// cout << "The integer you entered is negative." << endl;
// cout << "Enter a non-negative integer: ";
// cin >> n;
// }
//    do {
//         cout << "Enter a non-negative integer: ";
//         cin >> n;
//         if (n < 0) {
//             cout << "The integer you entered is negative." << endl;
//         }
//     } while (n < 0);

//4

// int i = 5, j = 6, k = 7, n = 3;
// cout << i + j * k - k % n << endl;
// cout << i / n << endl;

//5

// char ch;
// char title[] = "Titanic";
// ch = title[1];
// title[3] = ch;
// cout << title << endl;
// cout << ch << endl;

//6

// int found = 0, count = 5;
// if (!found || --count == 0){
// cout << "danger" << endl;}
// cout << "count = " << count << endl;

//7

// const int LENGTH = 21;
// char message[LENGTH];
// cout << "Enter a sentence on the line below." << endl;
// cin.getline(message, LENGTH, '\n');
// cout << message << endl;

//8

// int n, k = 5;
// n = (100 % k ? k + 1 : k - 1);
// cout << "n = " << n << " k = " << k << endl;

//9

int n;
float x = 3.8;
n = int(x);
cout << "n = " << n << endl;




return 0;


}
