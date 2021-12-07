#include <stdio.h>

int sum() // 사용자가 직접 정의한 sum( ) 함수
{
	int a = 10, b = 20, hap;
	hap = a + b;
	return hap;
}

int main(void)
{
	int result;

	printf("sum() 함수의 덧셈 연산 \n");
	result = sum(); // 사용자 정의 함수 호출

	printf("a = 10, b = 20일 때 ");
	printf("결과는 %d\n", result);
	return 0;
}