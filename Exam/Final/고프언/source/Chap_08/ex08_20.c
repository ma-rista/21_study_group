#include <stdio.h>

int Fact(int n); // 사용자 정의 함수 선언

int main(void)
{
	int input;
	int result;

	printf("전달> 팩토리얼 구할 정수 입력 : ");

	scanf_s("%d", &input);
	printf("호출> Fact( ) 함수 호출하여 팩토리얼 계산 \n");

	result = Fact(input); // 함수를 호출하면서 input을 인수로 전달
	printf("회신> %d! : %d\n", input, result);
	return 0;
}

int Fact(int n) // 사용자 정의 함수 정의
{
	if (n <= 1) // 무한 루프 탈출 위한 필요조건
		return 1;
	else
	{
		printf("수행> %d! : %d * (%d - 1) \n", n, n, n);
		return(n * Fact(n - 1)); // 자신의 함수인 Fact( ) 호출
	}
}