#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 정수 2개 입력받아 뺄셈 연산");

	int num1, num2, cha; // 정수형 변수 3개 선언

	printf("1.두 개의 정수 입력 :");
	scanf_s("%d %d", &num1, &num2);

	cha = num1 - num2; // 뺄셈 연산의 결과값을 cha 변수에 대입
	printf("2.뺄셈 결과 : %d - %d = %d\n", num1, num2, cha);
	return 0;
}