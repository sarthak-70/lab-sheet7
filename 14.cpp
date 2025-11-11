#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[50];
    cout << "Enter main string: ";
    cin.getline(str, 100);
    cout << "Enter substring: ";
    cin.getline(sub, 50);
    char* pos = strstr(str, sub);
    if (pos)
        cout << "Substring found at position: " << (pos - str) + 1;
    else
        cout << "Substring not found.";
    return 0;
}
