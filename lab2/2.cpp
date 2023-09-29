#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout<<"Enter the name of five countries: "<<endl;
    string name[5];
    //taking input from user
    for(int i=0;i<5;i++)
        cin>>name[i];
    
    //displaying countries
    cout << "Countries whose names start with vowels:" << endl;

    for(int i=0;i<5;i++){
        char fL=tolower(name[i][0]);
        if(fL=='a'|| fL=='e'||fL=='i'||fL=='o'||fL=='u'){
            cout<<"Vowel country : "<<name[i]<<endl;
        }
    }

    return 0;
}