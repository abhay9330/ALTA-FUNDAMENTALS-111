#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void reversePrint(Node* temp) {
    if (temp != NULL) {
        reversePrint(temp->next);
        cout << temp->data << " ";
}
}
int main() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    reversePrint(head);
    return 0;
}