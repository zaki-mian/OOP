#include <iostream>
#include <cstring>
using namespace std;

class student{
int id;
string name;
public:
// student(){
//     cout<<"I am constructor. "<<endl;
// };
student(int a,char b[]){
    id=a;
   name=b;
    cout<<id<< "  "<< name<<endl;
};
void display(){
    cout<<"I am display. "<<endl;
};
};

int main() {
    student s1;
    student s2(350 ,"BU");
    s2.display();
    s1.display();
}
