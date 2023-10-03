#include <iostream>
using namespace std;

class date{
    private:
    int month, day,year;
    public:
    date(int m,int d,int y){
        month=m;
        day=d;
        year=y;
    }
    void getdate(){
        cout<<"Enter month, day and year: ";
        cin>>month;
        cin>>day;
        cin>>year;
    }
    void showdate(){
        cout<<"Month: "<<month<<endl;
        cout<<"Day: "<<day<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
int main(){
    date d1(1,1,2000);
    d1.getdate();
    d1.showdate();
    return 0;
}