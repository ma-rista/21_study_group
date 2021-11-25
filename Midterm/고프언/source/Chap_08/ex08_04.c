#include <stdio.h>
#include <math.h> // 수학 함수 사용을 위한 헤더 파일

int main(void)
{
	double result, weight1, weight2; // double형으로 선언

	printf("내 몸무게 입력(kg) : ");
	scanf_s("%lf", &weight1);
	printf("선생님 몸무게 입력(kg) : ");
	scanf_s("%lf", &weight2);

	result = weight1 - weight2; // 일반 뺄셈 연산
	printf("[뺄셈 연산] %.2f - %.2f = %.2f \n", weight1, weight2, result);

	result = fabs(weight1 - weight2); // 절댓값 함수 사용
	printf("[절댓값] %.2f - %.2f = %.2f \n", weight1, weight2, result);

	return 0;
}