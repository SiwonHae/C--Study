#include <stdio.h>

int main(void)
{
    char a[1000000];
    int size = 0;
    int space = 0;
    int count = 0;

    gets(a);

    while (a[size] != '\0')
        size++;

    for (int i = 0; i < size; i++)
    {
        if (a[i] != ' ')
        {
            if (i > 0 && a[i - 1] != ' ')
                continue;
            else
                count++;
        }
    }
    printf("%d", count);

    return 0;
}