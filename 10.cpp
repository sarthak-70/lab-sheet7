#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverse(str, str + strlen(str));
    cout << "Reversed string: " << str;
    return 0;
}
