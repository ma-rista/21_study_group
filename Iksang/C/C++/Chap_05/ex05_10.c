#include <stdio.h>

int main(void)
{
	int a, b, val1, val2, val3, val4, val5;
	a = 5; // 0101 -> 2진수로 표현
	b = 3; // 0011 -> 2진수로 표현

	val1 = a & b;
	val2 = a || b;
	val3 = a ^ b;
	val4 = ~val3; // ~는 결과값에 1을 더함
	val5 = ~val4; // 결과값에 1을 더하고 부호를 반전

	printf("a = 5, b = 3일 때 \n");
	printf("1. a & b : %d\n", val1);
	printf("2. a b : %d\n", val2);
	printf("3. a ^ b : %d\n", val3);
	printf("4. (3)번 값 ~val3 : %d\n", val4);
	printf("5. (4)번 값 ~val4 : %d\n", val5);
	return 0;
}