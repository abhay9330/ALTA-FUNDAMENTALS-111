
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
     int count = 0;
      for (int j = 0; j < n; j++) {
            if (s[i] == s[j]) {
                count++;
            }}
        if (count == 1) {
            cout << s[i];
            break;
        }
    }
    return 0;
}
