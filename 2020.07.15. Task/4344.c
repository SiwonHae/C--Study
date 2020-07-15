#include <stdio.h>

int main(void)
{
    int C;
    int N;
    int a[1002];
    int sum = 0, count = 0;
    double avg;
    scanf_s("%d", &C);
    for (int i = 0; i < C; i++)
    {
        scanf_s("%d", &N);
        for (int j = 0; j < N; j++)
        {
            scanf_s("%d", &a[j]);
            sum += a[j];
        }
        avg = (double)sum / N;
        for (int k = 0; k < N; k++)
        {
            if (a[k] > avg)
                count++;
        }
        printf("%.3f%%\n", (double)count / N * 100);
        count = 0, sum = 0, avg = 0;
    }

    return 0;
}

