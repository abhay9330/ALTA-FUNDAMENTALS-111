#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node *head = new Node{1, NULL}, *temp = head;
    temp->next = new Node{2, NULL};
    temp = temp->next;
    temp->next = new Node{3, NULL};
    temp = temp->next;
    temp->next = new Node{4, NULL};
    int x = 3;
    if (head->data == x) head = head->next;
    else {
        temp = head;
        while (temp->next != NULL && temp->next->data != x)
            temp = temp->next;
        if (temp->next != NULL) temp->next = temp->next->next;
    }
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << "->";
        head = head->next;
    }
}