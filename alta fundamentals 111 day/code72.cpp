#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node *head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    int x = 2;
    while (head != NULL && head->data != x)
        head = head->next;
    cout << (head != NULL ? "true" : "false");
}