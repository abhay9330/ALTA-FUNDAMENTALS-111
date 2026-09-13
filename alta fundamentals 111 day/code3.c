#include <stdio.h>

int main() {
    int light;
    scanf("%d", &light);
    if (light == 1)
        printf("On\n");
    else
        printf("Off\n");
    light = !light;
    if (light)
        printf("On\n");
    else
        printf("Off\n");
}