#include <stdio.h>
#include "sum.h"

int main(void)
{
	int su1, su2, result;
	printf(" 첫 번째 정수 입력 : ");
	scanf_s("%d", &su1);
	printf(" 두 번째 정수 입력 : ");
	scanf_s("%d", &su2);

	result = sum(su1, su2);
	printf(" 덧셈 결과 : %d + %d = %d\n", su1, su2, result);
	return 0;
}