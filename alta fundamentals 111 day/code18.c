#include <stdio.h>
int main()
{
    int a;
    int i;
    scanf("%d", &a);
    printf("the numbers are\n");
    for(int i=1; i<=a; i++)
    {
        printf("%d ", i);
        if(i%7==0)
        {
            printf(" since this is divisible by %d", i);
            break;
        }
    }
}