#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);
    int res = strcmp(a, b);
    if (res == 0)
        cout << "Strings are equal.";
    else if (res > 0)
        cout << "First string is greater.";
    else
        cout << "Second string is greater.";
    return 0;
}
