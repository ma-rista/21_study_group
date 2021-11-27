#include <stdio.h>

int main(void)
{
	int num1, num2; // 4바이트 정수형 변수 선언
	float result; // 4바이트 실수형 변수 선언

	printf("정수 2개를 입력하세요. \n");
	printf("첫 번째 정수 num1 = ");
	scanf_s("%d", &num1);
	printf("두 번째 정수 num2 = ");
	scanf_s("%d", &num2);

	result = num1 / num2;
	printf("나눗셈 연산 = num1 / num2 = %d / %d = %f\n", num1, num2, result);
	return 0;
}