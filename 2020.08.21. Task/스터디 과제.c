#include <stdio.h> 

void split_time(int time, int* hour, int* min, int* sec)
{
	int temp_hour = 0, temp_min = 0, temp_sec = 0;

	temp_min = time / 60; // 초를 분으로 변환.
	temp_hour = temp_min / 60;
	temp_sec = time % 60;
	temp_min %= 60; // 분이 60을 넘어가지 않도록.

	*hour = temp_hour, * min = temp_min, * sec = temp_sec;

}

int main(void)
{
	int time;
	int hour, min, sec;

	printf("시간(초)을 입력하세요. : ");
	scanf_s("%d", &time);

	split_time(time, &hour, &min, &sec);

	printf("%d시간 %d분 %d초 입니다. \n", hour, min, sec);

	return 0;
}