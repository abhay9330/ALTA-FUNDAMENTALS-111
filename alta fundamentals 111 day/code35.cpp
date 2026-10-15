#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        d = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = d;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}