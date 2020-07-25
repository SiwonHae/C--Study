#include <stdio.h>

int main(void)
{
    int num;
    int temp = 1;
    int count = 1;

    scanf_s("%d", &num);

    while (1)
    {
        if (num <= temp)
        {
            printf("%d", count);
            break;
        }
        temp += 6 * count;
        count++;
    }
    return 0;
}