#include <stdio.h>
int main(){
    int z;
    scanf("%d",&z);
    if (z % 3 == 0 && z % 5 == 0)
        printf("Yes");
    else
        printf("No");
}