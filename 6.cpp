#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fname[50], lname[50], fullname[100];
    cout << "Enter first name: ";
    cin.getline(fname, 50);
    cout << "Enter last name: ";
    cin.getline(lname, 50);
    strcpy(fullname, fname);
    strcat(fullname, " ");
    strcat(fullname, lname);
    cout << "Full name: " << fullname;
    return 0;
}
