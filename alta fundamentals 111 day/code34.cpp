#include <iostream>
using namespace std;
int main() {
int arr[] = {1, 4, 3, 2, 6, 5};
int n = 6;
int start = 0;
int end = n-1;
while (start < end) {
int temp = arr[start];
arr[start] = arr[end];
arr[end]= temp;
start++;
end--;
}
for (int i = 0 ; i<n; i++) {
cout << arr[i] << " ";
}
}