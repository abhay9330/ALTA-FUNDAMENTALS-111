#include <stdio.h>

int main()
{
    int a;
    int i;

    scanf("%d", &a);

    printf("the numbers are\n");

    for(i = 1; i <= a; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            printf(" FIZZBUZZ ");
        else
            if(i % 3 == 0)
                printf(" FIZZ ");
            else
                if(i % 5 == 0)
                    printf(" buzz ");
                else
                    printf(" %d ", i);
    }
}