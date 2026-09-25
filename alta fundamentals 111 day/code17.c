#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int y = 0;
    int z = 1;
    for(int i = 0; i < n; i++){
        printf("%d ", y);
        int next = y+z;
        y = z;
        z = next;
    }
}