#include <stdio.h>

int main(void)
{
	int a, b, result;

	printf("비트 연산을 수행할 정수 입력 : ");
	scanf_s("%d", &a);

	printf("왼쪽으로 비트 이동할 정수 입력 : ");
	scanf_s("%d", &b);

	result = a << b;

	printf("비트 연산 결과 : %d << %d = %d\n", a, b, result);

	return 0;
}