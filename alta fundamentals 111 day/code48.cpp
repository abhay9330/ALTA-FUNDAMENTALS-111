#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
  for (int j = i + 1; j < s.length(); j++) {
     if (s[i] == s[j]) {
                cout << "false";
                return 0;
     }}}
    cout << "true";

    return 0;
}