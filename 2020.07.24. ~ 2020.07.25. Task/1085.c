#include <stdio.h>

int main(void)
{
    int x, y, w, h;

    int n1 = 0, n2 = 0;
    scanf_s("%d %d %d %d", &x, &y, &w, &h);

    n1 = w - x;
    n2 = h - y;

    if (n1 > n2)
    {
        if (n2 > x)
            printf("%d", (x > y) ? y : x);
        else if (n2 > y)
            printf("%d", (y > x) ? x : y);
        else
            printf("%d", n2);
    }
    else
    {
        if (n1 > x)
            printf("%d", (x > y) ? y : x);
        else if (n1 > y)
            printf("%d", (y > x) ? x : y);
        else
            printf("%d", n1);
    }

    return 0;
}