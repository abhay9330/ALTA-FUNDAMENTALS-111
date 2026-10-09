#include <stdio.h>
#include <math.h>
struct Point
{
    int x, y;
};

float distance(struct Point p1, struct Point p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                (p2.y - p1.y) * (p2.y - p1.y));
}

int main()
{
    struct Point p1 = {0, 0};
    struct Point p2 = {3, 4};

    printf("%.0f", distance(p1, p2));

    return 0;
}