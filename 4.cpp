#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100], temp1[100], temp2[100];
    cout << "Enter first string: ";
    cin.getline(s1, 100);
    cout << "Enter second string: ";
    cin.getline(s2, 100);
    strcpy(temp1, s1);
    strcpy(temp2, s2);
    if (strcmp(temp1, temp2) == 0)
        cout << "Strings are equal.";
    else
        cout << "Strings are not equal.";
    return 0;
}
