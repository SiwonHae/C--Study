#include <stdio.h>

int Oddprint(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
}

int Evenprint(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}

int main(void)
{
	int arr[10];

	printf("총 10개의 숫자 입력\n");

	for (int i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	printf("홀수 출력 : ");
	Oddprint(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	printf("짝수 출력 : ");
	Evenprint(arr, sizeof(arr) / sizeof(int));

	return 0;
}