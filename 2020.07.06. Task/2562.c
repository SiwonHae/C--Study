#include <stdio.h>

int main(void)
{
    int a[9];
    int max;
    int check = 0;
    for (int i = 0; i < 9; i++)
        scanf_s("%d", &a[i]);
    max = a[0];
    for (int i = 0; i < 9; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            check = i;
        }
    }
    printf("%d\n%d", max, check + 1);

    return 0;
}