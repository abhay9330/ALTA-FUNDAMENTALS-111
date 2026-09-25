#include <stdio.h>
int main(void)
{
    int d, m, y;
    int maxdays;
    scanf("%d %d %d", &d, &m, &y);
    if (m < 1 || m > 12)
    {
        printf("Invalid Date");
        return 0;
    }
    if (m == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        {
            maxdays = 29;
        }
        else
        {
            maxdays = 28;
        }
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 ||
             m == 8 || m == 10 || m == 12)
    {
        maxdays = 31;
    }
    else
    {
        maxdays = 30;

    }
    if (d>=1 && d<=maxdays)
    {
        printf("Valid Date");
    }
    else
    {
        printf("Invalid Date");
    }
    
}
