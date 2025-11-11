#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[50];
    cout << "Enter main string: ";
    cin.getline(s1, 100);
    cout << "Enter substring: ";
    cin.getline(s2, 50);
    if (strstr(s1, s2))
        cout << "Substring is present.";
    else
        cout << "Substring not found.";
    return 0;
}
