#include <iostream>
using namespace std;
int main() {
    string s = "geeks for geeks121";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      vowels++;
            else
                consonants++;
        }
    
    cout << "Vowels=" << vowels << endl;
    cout << "Consonants=" << consonants << endl;
    cout << "Digits=" << digits << endl;
    cout << "Spaces=" << spaces << endl;

    return 0;
}}