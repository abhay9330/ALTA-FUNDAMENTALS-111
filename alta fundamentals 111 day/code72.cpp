
#include <iostream>
using namespace std;
struct Node {
 int data;
    Node* next;
};
int main() {
Node* head = new Node{1, new Node{2, new Node{3, new Node{4, NULL}}}};
 int value = 3;
Node* temp = head;
if (head->data == value) head = head->next;
else {
     while (temp->next != NULL) {
if (temp->next->data == value) {
temp->next = temp->next->next;      break;
         }
      temp = temp->next;
        }}
    temp = head;
while (temp != NULL) {
       cout << temp->data;
  if (temp->next != NULL) cout << "->";
        temp = temp->next;
    }
    return 0;
}