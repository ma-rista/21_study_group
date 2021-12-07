#include <stdio.h>

int main(void)
{
	int input_num; // 4바이트 정수형 변수 선언

	printf("정수 입력 : ");
	scanf_s("%d", &input_num);

	printf("10진수로 출력 : %d\n", input_num);
	printf("8진수로 출력 : %o\n", input_num);
	printf("16진수로 출력 : %X\n", input_num);
	printf("입력한 정수에 해당하는 문자 : %c\n", input_num);
	return 0;
}