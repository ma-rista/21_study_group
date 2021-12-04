#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 정수 2개 입력받아 덧셈 연산");

	int num1, num2, hap; // 정수형 변수 3개 선언

	printf("1.첫 번째 정수 입력 : "); // 화면에 문장 출력
	scanf_s("%d", &num1); // 첫 번째 정수 입력 

	printf("2.두 번째 정수 입력 : "); // 화면에 문장 출력
	scanf_s("%d", &num2); // 두 번째 정수 입력 

	hap = num1 + num2; // 덧셈 연산
	printf("3.덧셈 결과 : %d + %d = %d\n", num1, num2, hap);
	return 0;
}