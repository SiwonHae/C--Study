#include <stdio.h>

int main(void)
{
	int arr[10];
	int num;
	int back = 9;
	int front = 0;

	printf("�� 10���� ���� �Է� : \n");
	for (int i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &num);

		if (num % 2 == 0)
		{
			arr[back] = num;
			back--;
		}
		else
		{
			arr[front] = num;
			front++;
		}
	}

	printf("�迭 ����� ��� : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}