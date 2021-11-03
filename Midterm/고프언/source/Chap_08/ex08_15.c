#include <stdio.h>

void Test(int num1, int num2); // 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	int a = 3, b = 5, hap = 0;

	printf("void형은 수식 사용하면 오류 발생 \n");
	printf(" \n\n[main ( ) 함수 영역] \n\n");
	printf("문> 두 수의 합을 구하는 함수 호출 \n");

	hap = Test(a, b); // void형은 반환값을 요구하는 수식 사용하면 오류 발생

	printf(" \n\n[main ( ) 함수 영역] \n\n");
	printf("답> 두 수의 합 : %d\n", hap);
	return 0;
}

void Test(int num1, int num2) // 사용자 정의 함수 정의
{
	int sum = 0;

	sum = num1 + num2;
	printf(" \n\n[Test ( ) 함수 영역] \n\n");
}