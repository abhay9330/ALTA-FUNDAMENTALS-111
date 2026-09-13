#include <stdio.h>
int main() {
int x, y;

scanf("%d %d", &x, &y);

printf("%s", (y> 0 && y <= x) ? "True" : "False");
}