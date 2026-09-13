#include <stdio.h>

int main() {
    float price, discount, final;

    scanf("%f", &price);

    discount = price - (price * 10 / 100);
    final = discount + (discount * 18 / 100);

    printf("%.0f", final);
}