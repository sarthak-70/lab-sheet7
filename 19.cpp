#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[300] = "", word[50];
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore();
    for (int i=0; i<n; i++) {
        cout << "Enter word " << i+1 << ": ";
        cin.getline(word, 50);
        strcat(sentence, word);
        if (i < n-1)
            strcat(sentence, " ");
    }
    cout << "Sentence: " << sentence;
    return 0;
}
