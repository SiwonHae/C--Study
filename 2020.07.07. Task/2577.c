#include <stdio.h>

int main(void)
{
    int A, B, C;
    int total = 0;
    int a[10000] = { 0 };
    int i = 0;

    scanf_s("%d", &A);
    scanf_s("%d", &B);
    scanf_s("%d", &C);
    total = A * B * C;

    while (total != 0)
    {
        i = total % 10;
        total /= 10;
        a[i]++;
    }

    for (int i = 0; i < 10; i++)
        printf("%d\n", a[i]);


    return 0;
}