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

	printf("�� 10���� ���� �Է�\n");

	for (int i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	printf("Ȧ�� ��� : ");
	Oddprint(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	printf("¦�� ��� : ");
	Evenprint(arr, sizeof(arr) / sizeof(int));

	return 0;
}