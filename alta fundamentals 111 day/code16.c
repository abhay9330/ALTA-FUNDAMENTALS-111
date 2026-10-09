#include <stdio.h>
int main()
{
    int a,b,r=0;
    scanf("%d" , &a);
    b=a;
    while(a>0){
        r = r * 10 + a % 10;
        a/= 10;
    }
if(b == r)
{
    printf("Palindrome");
}
else
printf("Not Palindrome");
    return 0;
}