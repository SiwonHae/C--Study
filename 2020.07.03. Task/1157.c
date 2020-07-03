#include <stdio.h> // 문자열, <단어 공부>

int main(void)
{
	char a[1000000];
	int asize = 0;
	int count[26] = { 0 };
	int check = 0, max = 0, idx = 0;

	scanf_s("%s", a, sizeof(a));

	while (a[asize] != '\0')
		asize++;

	for (int i = 0; i < asize; i++)
		for (int j = 'a'; j <= 'z'; j++)
			if (a[i] == j)
				count[a[i] - 'a']++;
	for (int i = 0; i < asize; i++)
		for (int j = 'A'; j <= 'Z'; j++)
			if (a[i] == j)
				count[a[i] - 'A']++;

	for (int i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			idx = i;
		}

	}

	for (int i = 0; i < 26; i++)
	{
		if (max == count[i])
		{
			check++;
		}
	}

	if (check > 1)
		printf("?");
	else
		printf("%c", idx + 65);


	return 0;
}