#include <iostream>
using namespace std;
struct Node {
int data;
 Node* next;
};
int main() {
 Node *head = new Node{1, NULL};
 Node *a = new Node{2, NULL};
Node *b = new Node{3, NULL};
 Node *c = new Node{4, NULL};
Node *d = new Node{5, NULL};
 head->next = a;
a->next = b;
b->next = c;
c->next = d;
Node *temp = head;
int n = 3;
while (n > 1) {
      temp = temp->next;
 n--;
    }
    cout << temp->data;
}