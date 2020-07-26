#include <stdio.h>

int main(void)
{
    int N, M;
    int num;
    int arr[100];
    int max = 0;
    int sum = 0;

    scanf_s("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
        scanf_s("%d", &arr[i]);

    max = arr[0];

    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum <= M && sum > max)
                    max = sum;
            }

    printf("%d", max);

    return 0;
}