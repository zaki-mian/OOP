#include <iostream>
using namespace std;
class circle{
    private:
    float radius;
    public:
    int ComputeArea(int r){
        radius=r;
        return 3.14*radius*radius;
    }
    int ComputeCircumference(int r){
        radius=r;
        return 2*3.14*radius;
    }
    void PrintArea(){
        cout<<ComputeArea(radius)<<endl;

    }
    void PrintCircumference(){
        cout<<ComputeCircumference(radius)<<endl;
    }
    void setRadius(float a);
};