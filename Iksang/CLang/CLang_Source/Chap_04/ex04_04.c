#include <stdio.h>

int main(void)
{
	unsigned long money; // 부호가 없는 4바이트 정수형 변수

	printf("unsigned long형 유효 범위 : 0 ~ 4,294,967,295\n");

	printf("1.보유 현금 입력 : ");
	scanf_s("%d", &money);

	printf("2.입력 현금 출력 : %d\n", money);
	return 0;
}