#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    Node *head = NULL, *temp = NULL;
    for(int i = 0; i < n; i++) {
        Node* p = new Node{a[i], NULL};
        if(head == NULL) head = p;
        else temp->next = p;
        temp = p;
    }

    vector<int> v;

    while(head != NULL) {
        v.push_back(head->data);
        head = head->next;
    }

    for(int x : v) cout << x << " ";

    return 0;
}