#include <stdio.h>

int main(void)
{
    int N, M;
    int count = 0, check = 0;
    int first;
    int sum, j;

    scanf_s("%d", &N);

    first = N;
    while (1)
    {
        first /= 10;
        count++;
        if (first == 0)
            break;
    }

    for (int i = N - 9 * count; i <= N; i++)
    {
        j = i;
        sum = i;

        while (1)
        {
            sum += j % 10;
            j /= 10;
            if (j == 0)
                break;
        }
        if (sum == N)
        {
            check = 1;
            printf("%d", i);
            break;
        }
    }
    if (check == 0)
        printf("0");


    return 0;
}