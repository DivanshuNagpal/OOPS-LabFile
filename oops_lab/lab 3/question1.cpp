#include <iostream>
using namespace std;

class Learner {
private:
    int registrationNo;
    float obtainedMarks;

public:
    Learner(int registrationNo, float obtainedMarks) {
        this->registrationNo = registrationNo;
        this->obtainedMarks = obtainedMarks;
    }

    void show() {
        cout << "Registration Number: " << registrationNo << endl;
        cout << "Obtained Marks: " << obtainedMarks << endl;
    }
};

int main() {
    Learner learner1(101, 85.5);

    Learner* objPointer;
    objPointer = &learner1;

    cout << "Accessing with dot operator:" << endl;
    learner1.show();

    cout << "\nAccessing with arrow operator:" << endl;
    objPointer->show();

    return 0;
}