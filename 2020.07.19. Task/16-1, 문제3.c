#include <stdio.h>

int main(void)
{
	int arr[5][5];
	int sum = 0;
	int hap = 0;
	int total = 0;

	for (int i = 0; i < 4; i++) // 각 학생 성적 총점
	{
		sum = 0;
		printf("%d번째 학생의 국, 영, 수, 국의 성적을 입력하시오 : ", i + 1);
		for (int j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][4] = sum;
		total += sum;
	}

	for (int i = 0; i < 4; i++) // 과목별 총점
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