#include <iostream>
using namespace std;

class student{
int id;
char name[50];
public:
student(){
    cout<<"I am constructor. "<<endl;
};
};
int main() {
    student s1;
    cout<<"I am main. ";
}
