#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char str[200];
    cout << "Please input a text string: ";
    cin.getline(str, 200);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "String length: " << length << endl;
    ofstream fout("data.txt");
    if (!fout) {
        cout << "Failed to create file!";
        return 1;
    }
    fout << str;
    fout.close();
    ifstream fin("data.txt");
    if (!fin) {
        cout << "Failed to open file!";
        return 1;
    }
    char ch;
    cout << "\nData retrieved from file:\n";
    while (fin.get(ch)) {
        cout << ch;
    }
    fin.close();
    return 0;
}