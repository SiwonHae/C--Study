#include <stdio.h>

int SquareByValue(int n1)
{
	return n1 * n1;
}

void SquareByReference(int* ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

int main(void)
{
	int num;

	scanf_s("%d", &num);

	printf("%d\n", SquareByValue(num));

	SquareByReference(&num);
	printf("%d\n", num);

	return 0;
}