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
    head->next->next->next = new Node{4, NULL};
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    cout << count;
}