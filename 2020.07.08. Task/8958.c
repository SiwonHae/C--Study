#include <stdio.h>

int main(void)
{
    char a[82];
    int num;
    int size = 0, check = 0, count = 0;

    scanf_s("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf_s("%s", a, sizeof(a));

        while (a[size] != '\0')
            size++;

        for (int j = 0; j < size; j++)
        {
            if (a[j] == 'O')
            {
                check++;
                count += check;
            }
            else
                check = 0;
        }
        printf("%d\n", count);
        count = 0, check = 0, size = 0;
    }

    return 0;
}