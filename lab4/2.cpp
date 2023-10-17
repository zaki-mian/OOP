#include <iostream>
using namespace std;

class Sphere {
private:
    double radius;
public:
    void set(double r) {
        radius = r;
    }
    double get() {
        return radius;
    }
    double Area() {
        return 4 * 3.14 * radius * radius;
    }
};

int main() {
    Sphere s;
    double r;
    cout << "Enter the radius of the sphere: ";
    cin >> r;
    s.set(r);
    cout << "The area of the sphere is: " << s.Area() << endl;
    return 0;
}

