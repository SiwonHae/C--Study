#include <stdio.h>

int main(void)
{
    int N, M;
    int first = 0, min = 0, sum = 0;
    scanf_s("%d", &M);
    scanf_s("%d", &N);

    for (int i = M; i <= N; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                if (i == j)
                {
                    sum += i;
                    first++;
                    if (first == 1)
                        min = i;
                    break;
                }
                else
                    break;
        }
    }
    if (sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);

    return 0;
}

