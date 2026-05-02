#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "The animal is consuming food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is making a barking sound" << endl;
    }
};

int main() {
    Animal a1;
    Dog d1;

    cout << "Base class object usage:" << endl;
    a1.eat();

    cout << "\nDerived class object usage:" << endl;
    d1.eat();
    d1.bark();

    return 0;
}