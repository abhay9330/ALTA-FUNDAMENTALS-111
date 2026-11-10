#include <iostream>
using namespace std;
int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = 9;
    int left = 0, right = n - 1;
    while(left < right) {
    if(arr[left] < 0) {
     left++;
     
         }
        else if(arr[right] >= 0) {
        right--;
        }
  
              else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }}
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
return 0;
}