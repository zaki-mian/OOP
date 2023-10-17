#include <iostream>
using namespace std;

// class MyClass{
//     private:                  

//     int x,y,result;
//     public:
//     string name;
//     MyClass(int a,int b){
//         x=a;
//         y=b;


//         // cout << "MyClass Constructor" << "\nEnter your name here: " << endl;
//         // cin>>name>>a>>b;
//         cout<<"\nYour name is: "<<name<<"you entered: "<<a<<" & "<<b<<"\n";
//         result=a+b;
//         cout<<result<<name;


//     }
//     // MyClass(){
//     //     cout<<"I am non-parametric constructor.";
//     // }
//     int show(){
//         int x=0;
//         // cout<<x;
//         return x;
//     }
// };
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z);
    // Car(string x,string y, int z){
    //     brand=x;
    //     model=y;
    //     year=z;
        
    // }
    void show(){
        cout<<brand<<" "<<model<<" "<<year<<"\n";
    };
    void outside();

};
 Car::Car(string x,string y, int z){
    cout<<"outside constructor";

};
void Car::outside(){
    cout<<"I am outside the class.";
}


int main(){

    Car carObj1("pepsi","strong",2023);
    // carObj1.brand="Toyota";
    // carObj1.model="Grande";
    // carObj1.year=2023;
    // Car carObj2;
    // carObj2.brand="Honda";
    // carObj2.model="Civic";
    // carObj2.year=2023;
    // cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    // cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";
    carObj1.show();
    carObj1.outside();
    // carObj2.show();
    // carObj2.outside();



    // MyClass obj(10,100);
    // // MyClass non();
    // cout<<obj.show();
    // // MyClass(10,10).name="zaki";
    // obj.name="my name is zaki ";

}