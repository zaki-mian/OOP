#include <iostream>
#include <string>
using namespace std;

class Ship {
    private:
        string name;
        int number;
        float longitude, latitude;
    public:
    void ship(){
        cout<<"Ship";
    }
        Ship(string n, int num) : name(n), number(num) {}
        
        void getPosition() {
            cout << "Enter longitude and latitude for " << name << ": ";
            cin >> longitude >> latitude;
        }
        
        void report() {
            cout << "Ship Name: " << name << endl;
            cout << "Ship Number: " << number << endl;
            cout << "Position - Longitude: " << longitude << ", Latitude: " << latitude << endl;
        }
};

int main() {
    Ship ship0;
    Ship ship1("Titanic", 1);
    Ship ship2("Queen Mary", 2);
    Ship ship3("Oasis of the Seas", 3);

    ship1.getPosition();
    ship2.getPosition();
    ship3.getPosition();

    ship1.report();
    ship2.report();
    ship3.report();

    return 0;
}
