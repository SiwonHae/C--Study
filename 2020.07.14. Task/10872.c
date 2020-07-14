#include <stdio.h>

int Factorial(int num)
{
	if (num == 0)
		return 1;
	return num * Factorial(num - 1);
}

int main(void)
{
	int num;

	scanf_s("%d", &num);
	printf("%d", Factorial(num));

	return 0;
}