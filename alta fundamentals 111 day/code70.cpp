
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    int n, x, val, pos;
    cin >> n;
    Node *head = NULL, *tail = NULL;
    while (n--) {
        cin >> x;
        Node* p = new Node{x, NULL};
        if (!head) head = p;
        else tail->next = p;
        tail = p;
    }
    cin >> val >> pos;
    Node* p = new Node{val, NULL};
    if (pos == 1) p->next = head, head = p;
    else {
        Node* t = head;
        for (int i = 1; i < pos-1; i++) t = t->next;
        p->next = t->next;
        t->next = p;
    }
    for (Node* t = head; t; t = t->next)
        cout << t->data << (t->next ? "->" : "");
    return 0;
}
