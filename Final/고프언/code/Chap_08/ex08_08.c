#include <stdio.h>

int Add(int num1, int num2); // 사용자 정의 함수 선언

int main(void) // main() 함수 정의
{
	int a = 10, b = 20, hap = 0;

	printf("매개변수 2개의 덧셈 연산 \n");
	printf("[main( ) 함수 영역] \n\n");
	printf("전달> %d과 %d을 Add( ) 함수에 전달 \n", a, b);

	hap = Add(a, b); // 사용자 정의 함수 호출

	printf("[main( ) 함수 영역] \n\n");
	printf("결과> %d과 %d의 덧셈 결과 : %d\n", a, b, hap);
	return 0;
}

int Add(int num1, int num2) // 사용자 정의 함수 정의
{
	int result;

	printf("[Add( ) 함수 영역] \n\n");
	printf("수행> 덧셈 연산 결과를 main( ) 함수에 반환 \n");

	result = num1 + num2;
	return result;
}