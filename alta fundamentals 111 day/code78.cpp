#include <iostream>
using namespace std;
int arr[5], top = -1;
void push(int x) {
    if(top == 4) cout << "Overflow";
    else arr[++top] = x;
}
void pop() {
    if(top == -1) cout << "Underflow";
    else top--;
}
void peek() {
    if(top == -1) cout << "Empty";
    else cout << arr[top];
}
bool isEmpty() {
    return top == -1;
}
int main() {
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();
    cout << endl << isEmpty();
}