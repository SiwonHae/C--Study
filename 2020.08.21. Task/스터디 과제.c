#include <stdio.h> 

void split_time(int time, int* hour, int* min, int* sec)
{
	int temp_hour = 0, temp_min = 0, temp_sec = 0;

	temp_min = time / 60; // �ʸ� ������ ��ȯ.
	temp_hour = temp_min / 60;
	temp_sec = time % 60;
	temp_min %= 60; // ���� 60�� �Ѿ�� �ʵ���.

	*hour = temp_hour, * min = temp_min, * sec = temp_sec;

}

int main(void)
{
	int time;
	int hour, min, sec;

	printf("�ð�(��)�� �Է��ϼ���. : ");
	scanf_s("%d", &time);

	split_time(time, &hour, &min, &sec);

	printf("%d�ð� %d�� %d�� �Դϴ�. \n", hour, min, sec);

	return 0;
}