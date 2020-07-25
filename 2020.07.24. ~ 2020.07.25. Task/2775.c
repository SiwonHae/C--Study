#include <stdio.h>

/* ��Ģ
    1�� 2ȣ : 0�� 1ȣ + 0�� 2ȣ
    1�� 3ȣ : 0�� 1ȣ + 0�� 2ȣ + 0�� 3ȣ = 1�� 2ȣ + 0�� 3ȣ
    => k�� nȣ : k�� (n-1)ȣ + (k-1)�� nȣ
*/

int main(void)
{
    int T, k, n;

    int arr[15][15] = { 0 };

    for (int i = 0; i < 15; i++)
        arr[0][i] = i;

    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 15; j++)
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

    scanf_s("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf_s("%d", &k);
        scanf_s("%d", &n);
        printf("%d\n", arr[k][n]);
    }

    return 0;
}