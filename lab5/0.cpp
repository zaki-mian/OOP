#include <iostream>
using namespace std;
class Distance{
    private:
    int f;
    float inc;
    public:
    Distance(int a, float b){
        f=a;
        inc=b;
    }
    Distance(){
        f=0;
        inc=0;
    }
    void getdist(){
        cout<<"Enter feet and inches: "<<endl;
        cin>>f>>inc;
    };
    void showdist(){
        cout<<"Feet: "<<f<<endl;
        cout<<"Inch: "<<inc<<endl;

    }
      void add_dist(Distance d1, Distance d2 ){
            f = d1.f+d2.f;
            inc += d2.inc+d2.inc;
        }
};
void main(){
    Distance dist1,dist3;
    Distance dist2(10,3.35);
    dist1.getdist();
    dist3.add_dist(dist1,dist2);
}