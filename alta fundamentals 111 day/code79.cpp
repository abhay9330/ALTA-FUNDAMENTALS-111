// for vs codde here count changed to cnt
#include <iostream>
using namespace std;

int q[100], f = 0, r = -1, n, cnt = 0;

void enqueue(int x) {
    if(cnt == n) return;
    r = (r + 1) % n;
    q[r] = x;
    cnt++;
}

void dequeue() {
    if(cnt == 0) return;
    f = (f + 1) % n;
    cnt--;
}

int front() {
    if(cnt == 0) return -1;
    return q[f];
}

bool isEmpty() {
    return cnt == 0;
}

int main() {
    int ch, x;
    cin >> n;

    while(cin >> ch && ch != 0) {
        if(ch == 1) {
            cin >> x;
            enqueue(x);
        }
        else if(ch == 2) dequeue();
        else if(ch == 3) cout << front() << endl;
        else if(ch == 4) cout << isEmpty() << endl;
    }

    return 0;
}