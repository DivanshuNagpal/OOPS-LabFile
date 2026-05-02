#include <iostream>
using namespace std;

// Global variable
int x = 100;

class Demo
{
private:
    static int count; // static variable

public:
    void displayMessage(); // function declared here (defined outside)
    
    void showLocalGlobal(int x)
    {
        cout << "Local x = " << x << endl;
        cout << "Global x = " << ::x << endl; // access global x using scope resolution
    }

    void showStatic()
    {
        count++; // access static variable
        cout << "Static count = " << count << endl;
    }
};

// Define static variable outside the class using scope resolution
int Demo::count = 0;

// Define function outside the class using scope resolution
void Demo::displayMessage()
{
    cout << "Function defined outside the class using scope resolution!" << endl;
}

int main()
{
    Demo d;

    // (a) Call class function defined outside the class
    d.displayMessage();

    // (b) Access global variable with same name as local variable
    int x = 50; // local variable
    d.showLocalGlobal(x);

    // (c) Access static variable
    d.showStatic();
    d.showStatic();

    // (d) Use inbuilt libraries with scope resolution operator
    std::cout << "Using std::cout with scope resolution" << std::endl;
    std::cin.ignore(); // using std::cin as example

    return 0;
}
