#include <stdio.h>

int main(void)
{
	int num1, num2, max, min;

	printf("정수 2개를 차례로 입력 \n");

	printf("첫 번째 정수 : ____ \b\b\b\b\b");
	scanf_s("%d", &num1);

	printf("두 번째 정수 : ____ \b\b\b\b\b");
	scanf_s("%d", &num2);

	max = (num1 > num2) ? num1 : num2;
	min = (num1 < num2) ? num1 : num2;

	printf("둘 중 큰 수 : %d\n", max);
	printf("둘 중 작은 수 : %d\n", min);
	return 0;
}