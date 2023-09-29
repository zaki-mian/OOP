#include <iostream>
#include <cstring>

using namespace std;

//use of strcpy() or strcpy_s()

// int main(){
//     char str1[20]= "Computer Science";
//     char str3[20];
//     strcpy_s(str3,str1);
//     cout<< "str3 : " <<str3<<endl;
//     cout<<"str1 : "<<str1<<endl;

// }

//use of strlen()


// int main(){
//     char str1[20]="computer science";
//     char str2[20]="world";
//     //for length
//     int length1,length2;
//     length1=strlen(str1);
//     length2=strlen(str2);
//     cout<<"str1 length : " <<length1<<endl;
//     cout<<"str2 length : " <<length2<<endl;

// }
 
//use of strcmp()

// int main(){
//  char str1[20] = "Fabulous";
// char str2[20] = "Better";
// char str3[20] = "bat";
		
		
// cout << "str compare str1, str2 : " << strcmp(str1,str2) << endl;
// cout << "str compare str2, str3 : " << strcmp(str2, str3) << endl;

// }

//use of getline()

// int main(){
// char nameArr[20];
// cout << "Enter your name";
// cin.getline(nameArr,20);
// cout << "You entered : " << nameArr;

// }

// int main(){
// string str1 ="Fabulous";
// string str2 ="Better";
// string str3="bat";

// str3=str1;

// cout<<"str 1: "<<str1 <<endl;
// cout<<"str 2: "<<str2 <<endl;
// cout<<"str 3: "<<str3 <<endl;


// }

// int main(){
//     string str1="Programming";
//     string str2="World";
//     string str3;
//     str3=str1 + str2;
//     cout<<"str 1: "<<str1<<endl;
//     cout<<"str 2: "<<str2<<endl;
//     cout<<"str 3: "<<str3<<endl;

// }

// int main(){
//     string str1="Programming";
//     string str2="World";
//     string str3;

//     str3=str1+str2;
//     int length= str3.size();
//     cout<<"str3 length: "<<length<<endl;
// }
// int main(){
    
// string str1 ="Fabulous";
// string str2="Better";
// string str3="Bat";
// cout<<"Comparing str1 and str2 : "<<str1.compare(str2)<<endl;
// cout<<"Comparing str2 and str3: "<<(str2==str3)<<endl;
// }

int main(){
    string nameStr;
    cout<<"Enter your name";
    getline(cin,nameStr);
    cout<<"you entered : "<<nameStr;
}