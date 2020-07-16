#include <stdio.h>

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;
}

int main(void)
{
	int num1, num2, num3;

	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);

	return 0;
}