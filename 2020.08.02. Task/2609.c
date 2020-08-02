#include <stdio.h>

int GCD(int n1, int n2)
{
	int n3 = 0;

	while (n2 != 0)
	{
		n3 = n1 % n2;
		n1 = n2;
		n2 = n3;
	}

	return n1;
}

int main(void)
{
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);
	printf("%d \n", GCD(num1, num2));
	printf("%d \n", num1 * num2 / GCD(num1, num2));

	return 0;
}
