#include <iostream>
using namespace std;

// class Employee {
//     int empNumber;
//     float empCompensation;
// public:
//     void getData() {
//         cout << "Enter employee number: ";
//         cin >> empNumber;
//         cout << "Enter employee compensation: ";
//         cin >> empCompensation;
//     }
//     void displayData() {
//         cout << "Employee number: " << empNumber << endl;
//         cout << "Employee compensation: " << empCompensation << endl;
//     }
// };

// int main() {
//     Employee emp[3];
//     for(int i=0; i<3; i++) {
//         cout << "Enter details of employee " << i+1 << endl;
//         emp[i].getData();
//     }
//     cout << endl;
//     for(int i=0; i<3; i++) {
//         cout << "Details of employee " << i+1 << endl;
//         emp[i].displayData();
//         cout << endl;
//     }
//     return 0;
// }

class employee{
    int id;
    float salary;
    public:
    void getData(){
        cout<<"Enter employee id: ";
        cin>>id;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void display(){
        cout<<"Employee id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;

    }
};
int main(){
    employee e[3];
    for(int i=0;i<3;i++){
        cout<<"Enter details of employe: "<<i+1<<endl;
        e[i].getData();
        e[i].display();
        
    }
}