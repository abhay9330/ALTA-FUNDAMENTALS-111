#include <iostream>
#include <stack>
using namespace std;
int priority(char c) {
   if (c == '+' || c == '-') return 1;
 if (c == '*' || c == '/') return 2;
    return 0;
}
int main() {
   string s = "A+B*C", ans = "";
stack<char> st;
 for (char c : s) {
  if (isalnum(c)) ans += c;
else {
while (!st.empty() && priority(st.top()) >= priority(c)) {
ans += st.top();
st.pop();
 }
 st.push(c);
}}
    while (!st.empty()) {
    ans += st.top();
     st.pop();
    }
    cout << ans;
}