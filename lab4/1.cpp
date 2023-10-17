#include <iostream>
using namespace std;

class employee{
    int id;
    float salary;
    public:
    // Default constructor
    employee(){
        id = 1;
        salary = 1000.0;
    }
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
        cout<<"Enter details of employee: "<<i+1<<endl;
        e[i].getData();
        e[i].display();
    }
    return 0;
}
