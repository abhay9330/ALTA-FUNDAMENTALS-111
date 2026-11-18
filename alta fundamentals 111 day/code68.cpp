#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int arr[] = {7, 3, 2, 4, 9, 12, 56};
int n = 7, m = 3;
sort(arr, arr + n);
int ans = arr[m - 1] - arr[0];
for (int i = 1; i <= n - m; i++) {
int diff = arr[i + m - 1] - arr[i];
if (diff < ans) ans = diff;
}
    cout << ans;
    return 0;
}