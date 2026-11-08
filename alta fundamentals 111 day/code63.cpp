#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = 6;
    int k = 3;
    sort(arr, arr + n);
    cout << "Kth Smallest Element: " << arr[k - 1];

    return 0;
}