#include <iostream>
using namespace std;

class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
private:
    int priv = 30;
};

class DerivedPublic : public Base {
public:
    void show() {
        cout << "Public-level inheritance:" << endl;
        cout << "public member: " << pub << endl;
        cout << "protected member: " << prot << endl;
    }
};

class DerivedProtected : protected Base {
public:
    void show() {
        cout << "\nProtected-level inheritance:" << endl;
        cout << "public member: " << pub << endl;
        cout << "protected member: " << prot << endl;
    }
};


class DerivedPrivate : private Base {
public:
    void show() {
        cout << "\nPrivate-level inheritance:" << endl;
        cout << "public member: " << pub << endl;
        cout << "protected member: " << prot << endl;
    }
};

int main() {
    DerivedPublic d1;
    d1.show();
    cout << "Main access (public inheritance): " << d1.pub << endl;

    DerivedProtected d2;
    d2.show();

    DerivedPrivate d3;
    d3.show();

    return 0;
}