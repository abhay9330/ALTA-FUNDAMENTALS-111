
#include <iostream>
using namespace std;
int main() {
    string s = "programming";
    char ch = 'm';
    string answer = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ch) {
            answer += s[i];
        }
    }
    cout << answer;

    return 0;
}
