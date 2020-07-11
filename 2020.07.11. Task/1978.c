#include <stdio.h>

int main(void)
{
    int N;
    int a[102];
    int count = 0;
    scanf_s("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &a[i]);
        for (int j = 2; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                if (a[i] == j)
                {
                    count++;
                    break;
                }
                else
                    break;
        }
    }
    printf("%d", count);

    return 0;
}

