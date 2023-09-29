#include <iostream>
#include <string>
using namespace std;
int mainI(){
    
    cout<<"Enter a string: "<<endl;
    string u_Str;
    getline(cin,u_Str);
    int count=u_Str.length();
    cout<<"No. of chars in the string: "<<count<<endl;
    return 0;
}