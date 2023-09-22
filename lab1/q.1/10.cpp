#include <iostream>
#include <string>
using namespace std;

// Structure to represent student information
struct Student {
    int id;
    string name;
    double marks[6]; // Assuming 6 subjects
};

// Function to find the highest and lowest marks in a subject
void findHighLowMarks(double marks[], int numStudents, double& highest, double& lowest) {
    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < numStudents; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
}

int main() {
    const int numStudents = 30;
    const int numSubjects = 6;

    Student students[numStudents];

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << " Information:" << endl;
        cout << "ID: ";
        cin >> students[i].id;
        cin.ignore(); // Clear newline character from the buffer
        cout << "Name: ";
        getline(cin, students[i].name);

        for (int j = 0; j < numSubjects; j++) {
            cout << "Marks in Subject " << j + 1 << ": ";
            cin >> students[i].marks[j];
        }
    }

    // Find highest and lowest marks in each subject
    double highestMarks[numSubjects];
    double lowestMarks[numSubjects];

    for (int i = 0; i < numSubjects; i++) {
        findHighLowMarks(students[0].marks + i, numStudents, highestMarks[i], lowestMarks[i]);
    }

    // Find number of failures and pass students in each subject
    int passCount[numSubjects] = {0};
    int failCount[numSubjects] = {0};

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            if (students[i].marks[j] >= 40) {
                passCount[j]++;
            } else {
                failCount[j]++;
            }
        }
    }

    // Display the results
    for (int i = 0; i < numSubjects; i++) {
        cout << "Subject " << i + 1 << " Highest Marks: " << highestMarks[i] << endl;
        cout << "Subject " << i + 1 << " Lowest Marks: " << lowestMarks[i] << endl;
        cout << "Subject " << i + 1 << " Pass Students: " << passCount[i] << endl;
        cout << "Subject " << i + 1 << " Fail Students: " << failCount[i] << endl;
    }

    return 0;
}
