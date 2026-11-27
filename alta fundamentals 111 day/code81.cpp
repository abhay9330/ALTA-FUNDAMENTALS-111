#include <iostream>
using namespace std;
int q[5], front = -1, rear = -1;
void enqueue(int x) {
    if ((rear + 1) % 5 == front)
        cout << "Full\n";
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % 5;
        q[rear] = x;}}
void dequeue() {
 if (front == -1)
 cout << "Empty\n";
else {
 cout << q[front] << endl;
 if (front == rear) front = rear = -1;
  else front = (front + 1) % 5;}}
void display() {
if (front == -1) cout << "Empty";
else {
  int i = front;
 while (true) {
cout << q[i] << " ";
  if (i == rear) break;
      i = (i + 1) % 5;
 }}}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    display();}