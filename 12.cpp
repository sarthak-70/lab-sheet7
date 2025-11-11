#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Enter character to find: ";
    cin >> ch;
    char* pos = strchr(str, ch);
    if (pos)
        cout << "First occurrence at position: " << (pos - str) + 1;
    else
        cout << "Character not found.";
    return 0;
}
