#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is Class B" << endl;
    }
};

int main() {
    B obj;
    obj.showA();
    obj.showB();
    return 0;
}