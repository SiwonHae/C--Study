#include <stdio.h>

int main(void)
{
    int A, B;
    int i = 0;
    int num1[102];
    int num2[102];
    int dap1 = 0, dap2 = 0;

    scanf_s("%d %d", &A, &B);

    while (A != 0)
    {
        num1[i] = A % 10;
        A /= 10;
        i++;
    }
    i = 0;
    while (B != 0)
    {
        num2[i] = B % 10;
        B /= 10;
        i++;
    }

    dap1 = 100 * num1[0] + 10 * num1[1] + num1[2];
    dap2 = 100 * num2[0] + 10 * num2[1] + num2[2];

    if (dap1 > dap2)
        printf("%d", dap1);
    else
        printf("%d", dap2);

    return 0;
}