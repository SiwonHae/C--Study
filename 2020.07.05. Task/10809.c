#include <stdio.h>

int main(void)
{
	char S[102];
	int size = 0;
	int check = 0;

	scanf_s("%s", S, sizeof(S));
	while (S[size] != '\0')
		size++;

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < size; j++)
			if (S[j] == i)
			{
				printf("%d ", j);
				check = 1;
				break;
			}
		if (check == 0)
			printf("-1 ");
		check = 0;
	}

	return 0;
}