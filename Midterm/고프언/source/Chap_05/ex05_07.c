#include <stdio.h>

int main(void)
{
	int a, b, c, val1, val2, val3, val4, val5;
	a = 0, b = 5, c = 8;

	val1 = a && b; // 거짓이므로 0 출력
	val2 = a || c; // 참이므로 1 출력
	val3 = (a > b) && (a < c); // 왼쪽이 거짓이므로 단축 논리 연산
	val4 = !val3; // 0이 아닌 1 출력
	val5 = b && c; // 0이 아닌 값의 연산으로 1 출력

	printf("a = 0, b = 5, c = 8일 때 \n");
	printf("1. a && b : %d\n", val1);
	printf("2. a c : %d\n", val2);
	printf("3. (a > b) && (a < c) : %d\n", val3);
	printf("4. (3)번 값 !val3 : %d\n", val4);
	printf("5. b && c : %d\n", val5);
	return 0;
}