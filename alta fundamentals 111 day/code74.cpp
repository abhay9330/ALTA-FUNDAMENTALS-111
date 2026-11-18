#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node *head = new Node{1, NULL};
    head->next = new Node{3, NULL};
    head->next->next = new Node{5, NULL};
    int x = 4;
    Node *n = new Node{x, NULL}, *temp = head;
    if (x < head->data) {
        n->next = head;
        head = n;
    } else {
        while (temp->next != NULL && temp->next->data < x)
            temp = temp->next;
        n->next = temp->next;
        temp->next = n;
    }
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << "->";
        head = head->next;
    }
}