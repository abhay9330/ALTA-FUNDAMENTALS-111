#include <iostream>
using namespace std;
int main() {
    int arr[6] = {0, 1, 0, 1, 1, 0};
    int left = 0, right = 5, temp;
    while (left < right) {
    if (arr[left] == 0) left++;
    else if (arr[right] == 1) right--;
    else {
temp = arr[left];
            arr[left] = arr[right];
      arr[right] = temp;
            left++;
            right--;
    }}
    for (int i = 0; i < 6; i++) {
     cout << arr[i] << " ";
    }
    return 0;
}