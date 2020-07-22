#include <stdio.h>
int Febo(int num)
{
	int a, b;
	int c;
	int i;

	a = 0;
	b = 1;

	if (num == 0)
		return a;
	else if (num == 1)
		return b;
	else
		return Febo(num - 1) + Febo(num - 2);

}

int main(void)
{
	int num;

	scanf_s("%d", &num);
	printf("%d", Febo(num));

	return 0;
}