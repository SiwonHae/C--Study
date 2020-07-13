#include <stdio.h>

int main(void)
{
    char a[102];
    char count = 0;
    int asize = 0;

    scanf_s("%s", a, sizeof(a));

    while (a[asize] != '\0')
        asize++;

    for (int i = 0; i < asize; i++)
    {
        if (a[i] == 'c' && a[i + 1] == '=')
        {
            count++;
            i += 1;
        }
        else if (a[i] == 'c' && a[i + 1] == '-')
        {
            count++;
            i += 1;
        }
        else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '=')
        {
            count++;
            i += 2;
        }
        else if (a[i] == 'd' && a[i + 1] == '-')
        {
            count++;
            i += 1;
        }
        else if (a[i] == 'l' && a[i + 1] == 'j')
        {
            count++;
            i += 1;
        }
        else if (a[i] == 'n' && a[i + 1] == 'j')
        {
            count++;
            i += 1;
        }
        else if (a[i] == 's' && a[i + 1] == '=')
        {
            count++;
            i += 1;
        }
        else if (a[i] == 'z' && a[i + 1] == '=')
        {
            count++;
            i += 1;
        }
        else
            count++;

    }

    printf("%d", count);

    return 0;
}
