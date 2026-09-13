#include <stdio.h>
int main()
{
int a;
int b;
int c;
scanf("%d %d", &a, &b);
c = a;
a = b;
b = c;
printf("After swapping\n");
printf("a = %d ", a);
printf("b = %d ", b);

return 0;
}