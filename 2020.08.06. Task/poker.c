#include <stdio.h>
#include <stdbool.h>

#define NUM_RANKS (13)
#define NUM_SUITS (4)
#define NUM_CARDS (5)

int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs;

void in_hand(void);
void classify(void);
void result(void);

int main(void)
{
	/* printf("Enter a cards : ");
	scanf("", ....); // 예시 : 2S 7C 0D-> 10다이아몬드 AC QS-> 퀸 스페이드

	// analyze...

	printf("Result: ..."); */

	for (;;)
	{
		in_hand();
		classify();
		result();
	}

	return 0;
}

void in_hand(void)
{

}

void classifying(void) 
{

}

void result(void)
{
	if (straight == true && flush == true)
		printf("Result: 스트레이트 플러시");
	else if (four == true)
		printf("Result: 포카드");
	else if (three == true && pairs == 1)
		printf("Result: 풀 하우스");
	else if (flush == true)
		printf("Result: 플러시");
	else if (straight == true)
		printf("Result: 스트레이트");
	else if (three == true)
		printf("Result: 트리플");
	else if (pairs == 2)
		printf("Result: 투 페어");
	else if (pairs == 1)
		printf("Result: 원 페어");
	else
		printf("Result: 하이 카드");

	return 0;
}