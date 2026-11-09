#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int target = 16;
    int n = 6;
    for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
   if(arr[i] + arr[j] == target) {
    cout << "true (" << arr[i] << " + " << arr[j] << ")";
        return 0;
   }}}
    cout << "false";
    return 0;
}