#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char src[100], dest[100];
    cout << "Enter a string: ";
    cin.getline(src, 100);
    strncpy(dest, src, 5);
    dest[5] = '\0';
    cout << "Copied string: " << dest;
    return 0;
}
