#include <stdio.h>

void Func(char* arr, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[len - 1 - i])
		{
			printf("ȸ���� �ƴմϴ�.");
			break;
		}

		else
		{
			printf("ȸ�� �Դϴ�.");
			break;
		}

	}
}

int main(void)
{
	char arr[100];
	int arrsize = 0;

	printf("���ڿ� �Է� : ");
	scanf_s("%s", arr, sizeof(arr));

	while (arr[arrsize] != '\0')
		arrsize++;

	Func(arr, arrsize);

	return 0;
}