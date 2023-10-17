#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Student {
private:
    string name;
    string password;
    int id;
public:
    Student(string name, string password, int id) {
        this->name = name;
        this->password = password;
        this->id = id;
    }

    string getName() {
        return name;
    }

    string getPassword() {
        return password;
    }

    int getId() {
        return id;
    }
};

class StudentSystem {
private:
    unordered_map<string, Student> students;
    int nextId = 1;
public:
    void registerStudent(string name, string password) {
        Student student(name, password, nextId++);
        students[name] = student;
        cout << "Registration successful" << endl;
    }

    void login(string name, string password) {
        if (students.count(name) == 0) {
            cout << "Invalid username" << endl;
        } else if (students[name].getPassword() != password) {
            cout << "Incorrect password" << endl;
        } else {
            cout << "Login successful" << endl;
        }
    }
};

int main() {
    StudentSystem system;
    int choice;
    string name, password;

    while (true) {
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter password: ";
                cin >> password;
                system.registerStudent(name, password);
                break;
            case 2:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter password: ";
                cin >> password;
                system.login(name, password);
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
}
