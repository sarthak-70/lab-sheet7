#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str[100], rev[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    strcpy(rev, str);
    reverse(rev, rev + strlen(rev));
    if (strcmp(str, rev) == 0)
        cout << "Palindrome.";
    else
        cout << "Not palindrome.";
    return 0;
}
