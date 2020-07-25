#include <stdio.h>

int main(void)
{
    int ascending[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int descending[] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int num[8];
    int a = 0, b = 0;

    for (int i = 0; i < 8; i++)
        scanf_s("%d", &num[i]);

    for (int i = 0; i < 8; i++)
    {
        if (num[i] == ascending[i])
            a++;
        else if (num[i] == descending[i])
            b++;
    }

    if (a == 8)
        printf("ascending");
    else if (b == 8)
        printf("descending");
    else
        printf("mixed");

    return 0;
}