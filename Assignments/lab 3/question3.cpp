#include <iostream>
using namespace std;

class SecondClass;

class FirstClass {
private:
    int firstValue;

public:
    FirstClass(int val) {
        firstValue = val;
    }

    friend int calculateSum(FirstClass, SecondClass);

    void show() {
        cout << "Value of firstValue in FirstClass: " << firstValue << endl;
    }
};

class SecondClass {
private:
    int secondValue;

public:
    SecondClass(int val) {
        secondValue = val;
    }

    friend int calculateSum(FirstClass, SecondClass);

    void show() {
        cout << "Value of secondValue in SecondClass: " << secondValue << endl;
    }
};

int calculateSum(FirstClass obj1, SecondClass obj2) {
    return obj1.firstValue + obj2.secondValue;
}

int main() {
    FirstClass firstObj(15);
    SecondClass secondObj(25);

    firstObj.show();
    secondObj.show();

    int total = calculateSum(firstObj, secondObj);

    cout << "Total of values: " << total << endl;

    return 0;
}