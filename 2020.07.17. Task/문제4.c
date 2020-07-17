#include <stdio.h>

void Func(char* arr, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[len - 1 - i])
		{
			printf("회문이 아닙니다.");
			break;
		}

		else
		{
			printf("회문 입니다.");
			break;
		}

	}
}

int main(void)
{
	char arr[100];
	int arrsize = 0;

	printf("문자열 입력 : ");
	scanf_s("%s", arr, sizeof(arr));

	while (arr[arrsize] != '\0')
		arrsize++;

	Func(arr, arrsize);

	return 0;
}