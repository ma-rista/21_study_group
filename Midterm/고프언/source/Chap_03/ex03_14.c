#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 표준 입력 함수 연속 선언");

	char op1, op2;

	printf("문자 2개를 연속해서 입력하세요. \n");
	printf("1.첫 번째 문자 입력 : ");
	scanf_s("%c", &op1, sizeof(op1));
	printf("2.두 번째 문자 입력 : ");
	scanf_s("%c", &op2, sizeof(op2));

	printf(" \n");
	printf("첫 번째 문자 출력 : %c\n", op1);
	printf("두 번째 문자 출력 : %c\n", op2);
	return 0;
}