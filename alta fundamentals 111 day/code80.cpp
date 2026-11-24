#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* top = NULL;
void push(int x) {
    Node* n = new Node;
    n->data = x;
    n->next = top;
    top = n;}
void pop() {
if (top == NULL) return;
 Node* temp = top;
 top = top->next;
delete temp;}
void peek() {
if (top == NULL) cout << "Empty";
 else cout << top->data;
}
bool isEmpty() {
 return top == NULL;
}
int main() {
 push(10);
 push(20);
 push(30);
peek();
    pop();
    cout << endl;
    peek();
}