#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Using if-else
    if (n % 2 == 0)
        cout << "Number is Even";
    else
        cout << " Number is Odd";

    cout << endl;

    // Using conditional operator
    (n % 2 == 0) ? 
        cout << "Number is Even" :
        cout << "Number is Odd";

    return 0;
}
