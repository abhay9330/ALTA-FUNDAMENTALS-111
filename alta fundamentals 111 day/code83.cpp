#include <iostream>
#include <stack>
using namespace std;
void bottom(stack<int> &s, int x) {
    if (s.empty()) {
 s.push(x);
 return;
    }
 int a = s.top();
 s.pop();
 bottom(s, x);
 s.push(a);
}
void rev(stack<int> &s) {
    if (s.empty()) return;
    int x = s.top();
    s.pop();
    rev(s);
    bottom(s, x);
}
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    rev(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }}