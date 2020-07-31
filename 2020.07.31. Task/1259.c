#include <stdio.h>

int main(void)
{
	char num[100000];
	int arr[100000];
	int len = 0;
	int n;

	while (1)
	{
		scanf_s("%s", num, sizeof(num));

		while (num[len] != '\0')
			len++;
		for (int i = 0; i < len; i++)
			arr[i] = num[i];

		if (num[0] == '0')
			break;

		if (len == 1)
		{
			printf("yes\n");
			len = 0;
		}

		for (int i = 0; i < len / 2; i++)
		{

			if (arr[i] != arr[len - i - 1])
			{
				printf("no\n");
				len = 0;
				break;
			}
			else
			{
				if (arr[i + 1] == arr[len - i - 2])
				{
					printf("yes\n");
					len = 0;
					break;
				}
				else
				{
					printf("no\n");
					len = 0;
					break;
				}
			}
		}

	}

	return 0;
}
