#include <stdio.h>

void BubbleSort(int ary[], int len)
{
	int temp;

	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1 - i; j++)
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
}

int main(void)
{
	int arr[5];

	printf("������������ ������ 5���� ���ڸ� �Է��Ͻÿ�. \n");
	for (int i = 0; i < 5; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	BubbleSort(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}