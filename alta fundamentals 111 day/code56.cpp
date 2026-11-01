#include <iostream>
using namespace std;
int main()
{
 int n, target;
cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
     cin >> arr[i];
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i;
            return 0;
    }
    }

    cout << -1;
    return 0;
}