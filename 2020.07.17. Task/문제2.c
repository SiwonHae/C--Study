#include <stdio.h>

int main(void)
{
	int num;
	int binary[100];
	int i = 0;

	printf("10���� ���� �Է� : ");
	scanf_s("%d", &num);

	while (num != 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", binary[j]);


	return 0;
}