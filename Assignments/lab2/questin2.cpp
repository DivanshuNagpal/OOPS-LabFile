#include <iostream>
#include <string>
using namespace std;

class Student
{
private: // only accessible inside the class
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void updateDetails() // private function
    {
        cout << "Update name: ";
        cin >> name;
        cout << "Update degree: ";
        cin >> degree;
    }

public: // accessible outside the class
    void addDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter hostel name: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel()
    {
        cout << "Enter new hostel name: ";
        cin >> hostel;
    }

    void displayDetails()
    {
        cout << "\nStudent Details";
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nDegree: " << degree;
        cout << "\nHostel: " << hostel;
        cout << "\nCGPA: " << cgpa;
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.displayDetails();

    s.updateCGPA();   // public
    s.updateHostel(); // public

    s.displayDetails();

    return 0;
}
