#include <iostream>
#include <string>
using namespace std;

struct Pupil
{
    string fullName;
    int enrollmentNo;
    string program;
    string dormitory;
    float academicScore;

    void inputRecord()
    {
        cout << "Please enter full name: ";
        cin >> fullName;

        cout << "Please enter enrollment number: ";
        cin >> enrollmentNo;

        cout << "Please enter program: ";
        cin >> program;

        cout << "Please enter dormitory name: ";
        cin >> dormitory;

        cout << "Please enter academic score: ";
        cin >> academicScore;
    }

    void modifyRecord()
    {
        cout << "Modify full name: ";
        cin >> fullName;

        cout << "Modify program: ";
        cin >> program;
    }

    void modifyScore()
    {
        cout << "Enter updated academic score: ";
        cin >> academicScore;
    }

    void modifyDormitory()
    {
        cout << "Enter updated dormitory name: ";
        cin >> dormitory;
    }

    void showRecord()
    {
        cout << "\n--- Pupil Information ---";
        cout << "\nFull Name: " << fullName;
        cout << "\nEnrollment No: " << enrollmentNo;
        cout << "\nProgram: " << program;
        cout << "\nDormitory: " << dormitory;
        cout << "\nAcademic Score: " << academicScore;
    }
};

int main()
{
    Pupil pupil;

    pupil.inputRecord();
    pupil.showRecord();

    pupil.modifyScore();
    pupil.modifyDormitory();

    pupil.showRecord();

    return 0;
}
