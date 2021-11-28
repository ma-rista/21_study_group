#include <stdio.h>

int main(void)
{
	unsigned short a, b, result; // 부호가 없는 2바이트 정수형 변수

	printf("unsigned short형 유효 범위 : 0 ~ 65,535\n");
	printf("1.첫 번째 정수 입력 : ");
	scanf_s("%hu", &a);
	printf("2.두 번째 정수 입력 : ");
	scanf_s("%hu", &b);

	result = a - b;
	printf("뺄셈 연산 : %hu - %hu = %hu\n", a, b, result);
	return 0;
}