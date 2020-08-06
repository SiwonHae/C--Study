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
	scanf("", ....); // ���� : 2S 7C 0D-> 10���̾Ƹ�� AC QS-> �� �����̵�

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
		printf("Result: ��Ʈ����Ʈ �÷���");
	else if (four == true)
		printf("Result: ��ī��");
	else if (three == true && pairs == 1)
		printf("Result: Ǯ �Ͽ콺");
	else if (flush == true)
		printf("Result: �÷���");
	else if (straight == true)
		printf("Result: ��Ʈ����Ʈ");
	else if (three == true)
		printf("Result: Ʈ����");
	else if (pairs == 2)
		printf("Result: �� ���");
	else if (pairs == 1)
		printf("Result: �� ���");
	else
		printf("Result: ���� ī��");

	return 0;
}