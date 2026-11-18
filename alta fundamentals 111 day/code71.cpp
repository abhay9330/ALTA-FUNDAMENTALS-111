#include <iostream>
using namespace std;
struct Node{
 int data;
 Node* next;
};
int main(){
Node a{1,NULL}, b{2,NULL}, c{4,NULL};
    a.next=&b;
    b.next=&c;
    Node x{3,b.next};
    b.next=&x;
    Node* temp=&a;
    cout<<"Output: ";
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL) cout<<" -> ";
        temp=temp->next;
    }
}