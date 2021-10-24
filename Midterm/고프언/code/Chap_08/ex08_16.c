#include <stdio.h>

void Test(int num1, int num2); // 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	int a = 3, b = 5, hap = 0;

	printf("수식 삭제로 void형의 오류 해결 \n");
	printf(" \n\n[main ( ) 함수 영역] \n\n");
	printf("문> a = 3, b = 5를 사용자 정의 함수에 전달 \n");

	Test(a, b); // 반환값을 요구하는 수식을 사용하지 않고 함수 호출
	return 0;
}

void Test(int num1, int num2) // 사용자 정의 함수 정의
{
	int sum = 0;
	sum = num1 + num2;

	printf(" \n\n[Test ( ) 함수 영역] \n\n");
	printf("답> 두 수의 덧셈 연산 결과 : %d\n", sum);
}