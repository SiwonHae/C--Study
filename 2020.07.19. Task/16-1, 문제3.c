#include <stdio.h>

int main(void)
{
	int arr[5][5];
	int sum = 0;
	int hap = 0;
	int total = 0;

	for (int i = 0; i < 4; i++) // �� �л� ���� ����
	{
		sum = 0;
		printf("%d��° �л��� ��, ��, ��, ���� ������ �Է��Ͻÿ� : ", i + 1);
		for (int j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][4] = sum;
		total += sum;
	}

	for (int i = 0; i < 4; i++) // ���� ����
	{
		hap = 0;
		for (int j = 0; j < 4; j++)
		{
			hap += arr[j][i];
		}
		arr[4][i] = hap;
	}
	arr[4][4] = total;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}


	return 0;

}