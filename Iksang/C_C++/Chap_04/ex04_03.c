#include <stdio.h>

int main(void)
{
	signed short num1; // 부호가 있는 2바이트 정수형 변수
	int num2; // 변수 num2를 int형으로 선언

	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short형 유효 범위 : -32768 ~ 32767\n");
	printf("1.변수 short num1 = 32767은 정상 출력 : %7d\n", num1);
	printf("2.변수 int num2 = 32767 + 8은 정상 출력 : %7d\n", num2);
	return 0;
}