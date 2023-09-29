#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char str1[20]= "Computer Science";
    char str3[20];
    strcpy_s(str3,str1);
    cout<< "str3 : " <<str3<<endl;
    cout<<"str1 : "<<str1<<endl;
}