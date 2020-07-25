#include <stdio.h>

/* ±ÔÄ¢
    1Ãþ 2È£ : 0Ãþ 1È£ + 0Ãþ 2È£
    1Ãþ 3È£ : 0Ãþ 1È£ + 0Ãþ 2È£ + 0Ãþ 3È£ = 1Ãþ 2È£ + 0Ãþ 3È£
    => kÃþ nÈ£ : kÃþ (n-1)È£ + (k-1)Ãþ nÈ£
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