// WARNING
// It takes only one computer to infict everyone.

#include <iostream>
using namespace std;

class Rectangle{
private:
int x,y;
public:
void setvalues(int a, int b){
    x=a;
    y=b;
}
int area(){
    return (x*y);
}
};
// define class
class part{
    private:
    int modelNumber;
    int partNUmber;
    float cost;
    public:

    // set data
    void setPark(int mn, int pn,float c){
        modelNumber=mn;
        partNUmber=pn;
        cost=c;
    }
    // display data
    void showPart(){
        cout<<"Model "<<modelNumber;
        cout<<"Part "<<partNUmber;
        cout<<"cost $"<<cost<<endl;
    }
};



int main(){
    Rectangle rect;
    rect.setvalues(10,20);
    cout<<"Area: "<<rect.area();

    part part1;
    part1.setPark(1234,5678,1000);
    part1.showPart();
    return 0;
}

// another way to define the class

 
// class Rectangle 
// { 
//   int x, y; 
// public: 
// void setValues(int a,int b );
//   int area(); 
// }; 
 
// void Rectangle::setValues (int a, int b)
// {    x = a;   y = b; } 
  
// int Rectangle::area() 
// {  return (x*y); } 



