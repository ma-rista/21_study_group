#include <stdio.h>

int main(void)
{
	float su;

	printf("소수 여섯째 자리까지 실수 입력 : ");
	scanf_s("%f", &su);

	printf("소수 둘째 자리까지 출력 : %.2f\n", su);
	printf("전체 자릿수 6자리, 소수 첫째 자리까지 출력 : %06.1f\n", su);

	return 0;
}