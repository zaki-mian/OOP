#include <iostream>
using namespace std;

// Define a struct for PakistaniCitizen
struct PakistaniCitizen {
  string name; // data member for name
  int age;     // data member for age
  char gender; // data member for gender
};

// Function to check if a citizen is eligible for vaccination
bool isCovidVaccinated(PakistaniCitizen c) {
  // Check if the age of the citizen is 12 or above
  if (c.age >= 12) {
    // Return true if eligible
    return true;
  } else {
    // Return false if not eligible
    return false;
  }
}

int main() {
  // Create an object of PakistaniCitizen
  PakistaniCitizen p;

  // Input citizen's information from the user
  cout << "Enter the citizen's name: ";
  cin >> p.name;

  cout << "Enter the citizen's age: ";
  cin >> p.age;

  cout << "Enter the citizen's gender (M/F): ";
  cin >> p.gender;

  // Call the function isCovidVaccinated with the object as an argument
  bool result = isCovidVaccinated(p);

  // Print the result based on the return value of the function
  if (result == true) {
    cout << "Citizen is Eligible for Vaccination" << endl;
  } else {
    cout << "Citizen is Not Eligible for Vaccination" << endl;
  }

  return 0;
}
