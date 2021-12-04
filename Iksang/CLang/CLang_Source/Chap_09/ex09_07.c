#include <stdio.h>

void CRedit(int cash); // 사용자 정의 함수 선언 

int main(void)
{
	int cnt, cash = 0; // 지역 변수 사용

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("<%d회 실행> \n", cnt);
		printf("현금 : ");
		scanf_s("%d", &cash);

		printf("입금 \t\t출금 \t\t잔액 \n");
		CRedit(cash); // 사용자 정의 함수 호출
	}

	printf(" \n총 %d회 실행 후 프로그램 종료 \n", cnt - 1);

	return 0;
}

void CRedit(int cash) // 사용자 정의 함수 선언 
{
	static int balance = 0; // 정적 변수 선언과 초기화

	if (cash >= 0)
		printf("%d\t\t\t\t", cash);
	else
		printf(" \t\t%d\t\t", -cash);

	balance += cash;
	printf("%d\n", balance);
}