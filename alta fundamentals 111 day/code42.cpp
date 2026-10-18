#include <iostream>
using namespace std;

int main() {
    string s = "Madam";
    int n = 5, i;

    for (i = 0; i < n / 2; i++) {
        char a = s[i];
        char b = s[n - 1 - i];
        if (a >= 'A' && a <= 'Z') a += 32;
        if (b >= 'A' && b <= 'Z') b += 32;
        if (a != b) {
            cout << "false";
            return 0;
        }
        }

    cout << "true";
    return 0;
}