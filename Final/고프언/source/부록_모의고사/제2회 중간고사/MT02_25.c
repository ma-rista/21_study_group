#include <stdio.h>

int Call_ref(int* su);     // 사용자 정의 함수 선언

int main(void)
{
	int num, result;

	printf(" >> 정수 입력 : ");
	scanf_s("%d", &num);

	printf(" >> 함수 호출하기 전의 값 ... [ %5d ] \n", num);

	result = Call_ref(&num);     // 주소에 의한 호출

	printf(" >> 함수 호출 후의 값 ....... [ %5d ] \n", result);
	return 0;
}

int Call_ref(int *su)          // 함수 정의
{
	*su = *su * *su;           // 주소에 저장된 값의 제곱 산출
	return *su;
}