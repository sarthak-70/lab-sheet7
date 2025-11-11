#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    int words = 1;
    cout << "Enter a sentence: ";
    cin.getline(str, 200);
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ' && str[i+1] != ' ')
            words++;
    cout << "Number of words: " << words;
    return 0;
}
