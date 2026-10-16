#include <iostream>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0, last, first = 1;
    while(i < n || j < m)
    {
        if(j == m || (i < n && arr[i] < arr2[j]))
            x = arr[i++];
        else if(i == n || arr2[j] < arr[i])
            x = arr2[j++];
        else
        {
            x = arr[i];
            i++;
            j++;
        }
        if(first || x != last)
        {
            cout << x << " ";
            last = x;
            first = 0;
        }
    }
    return 0;
}
