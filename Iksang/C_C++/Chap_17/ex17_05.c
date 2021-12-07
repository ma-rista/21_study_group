#include <stdio.h>

#define swap1(a) (a * a)       // 매크로 함수 정의
#define swap2(a) ((a) * (a))   // 매개변수를 괄호로 처리

int main(void)
{
	int num;

	printf(" 정수 입력 : ");
	scanf_s("%d", &num);

	printf("\n 괄호 없는 %d의 제곱은 %d\n", num, swap1(num));
	printf(" 괄호 있는 %d의 제곱은 %d\n", num, swap2(num));
	printf("\n 괄호 없는 (%d+5)의 제곱은 %3d\n", num, swap1(num + 5));
	printf(" 괄호 있는 (%d+5)의 제곱은 %3d\n", num, swap2(num + 5));
	return 0;
}