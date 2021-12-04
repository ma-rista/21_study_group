#include <stdio.h>

int main(void)
{
	short min_su, input, result; // 부호가 있는 2바이트 정수형 변수
	min_su = -32768;

	printf("short형 유효 범위 : -32,768 ~ 32,767\n");
	printf("min_su = -32,768일 때 \n");
	printf("뺄셈 연산을 수행할 정수 입력 : ");
	scanf_s("%hi", &input);

	result = min_su - input;
	printf("뺄셈 연산 : %hi - %hi = %hi\n", min_su, input, result);
	return 0;
}