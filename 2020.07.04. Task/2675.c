#include <stdio.h>

int main(void)
{
	int T, R;
	char S[22];
	int size = 0;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d %s", &R, S, sizeof(S));
		while (S[size] != '\0')
			size++;

		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < R; k++)
				printf("%c", S[j]);
		}
		printf("\n");
		size = 0;
	}


	return 0;
}