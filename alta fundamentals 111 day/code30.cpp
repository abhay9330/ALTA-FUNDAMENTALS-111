#include <stdio.h>

struct Node {
    int val;
    struct Node* next;
};

int main() {
    struct Node n1, n2;

    n1.val = 10;
    n2.val = 20;

    n1.next = &n2;
    n2.next = NULL;

    struct Node* temp = &n1;

    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }

    printf("\n");

    return 0;
}