#include <stdio.h>

int main(void)
{
	int num, val1, val2, val3, val4;
	num = 5; // 5를 2진수로 표현하면 0000 0101

	val1 = num << 1; // 결과값 10
	val2 = num << 2; // 결과값 20
	val3 = num >> 1; // 결과값 2
	val4 = num >> 2; // 결과값 1

	printf("num = 5일 때 \n");
	printf("1. 왼쪽 시프트 연산 \n");
	printf("num << 1 : %d\n", val1);
	printf("num << 2 : %d\n", val2);
	printf("2. 오른쪽 시프트 연산 \n");
	printf("num >> 1 : %d\n", val3);
	printf("num >> 2 : %d\n", val4);
	return 0;
}