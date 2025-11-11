#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char s1[100], s2[100];
    cout << "Enter first string: ";
    cin.getline(s1, 100);
    cout << "Enter second string: ";
    cin.getline(s2, 100);
    if (strlen(s1) != strlen(s2)) {
        cout << "Not anagrams.";
        return 0;
    }
    sort(s1, s1 + strlen(s1));
    sort(s2, s2 + strlen(s2));
    if (strcmp(s1, s2) == 0)
        cout << "Strings are anagrams.";
    else
        cout << "Not anagrams.";
    return 0;
}
