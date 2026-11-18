#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    int n, x, value;
    cin >> n;
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
    cin >> x;
    Node* p = new Node{x, NULL};
    if (head == NULL) head = p;
    else tail->next = p;
    tail = p;
    }
    cin >> value;
    Node *temp = head, *prev = NULL;
    while (temp != NULL && temp->data < value) {
     prev = temp;
      temp = temp->next;}
    Node* p = new Node{value, temp};
    if (prev == NULL) head = p;
    else prev->next = p;
    temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << "->";
        temp = temp->next;
    }
    return 0;}
