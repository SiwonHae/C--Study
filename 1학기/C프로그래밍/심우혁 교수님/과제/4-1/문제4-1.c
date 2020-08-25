#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	num = ~num;
	num += 1;
	printf("result = %d\n", num);
	return 0;
}