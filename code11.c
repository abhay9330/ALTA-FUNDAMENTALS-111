#include <stdio.h>
int main(){
int a;
int b;
char operators;
scanf("%d %d %c", &a, &b, &operators);
switch(operators){
    case '+':
    printf("ans is %d" , a + b);
    break;
    case '-':
    printf( "ans is %d" , a - b);
    break;
    case '*':
    printf( "ans is %d" , a * b);
    break;
    case '/':
    printf( "ans is %d" , a / b);
     break;
    }
}

    
