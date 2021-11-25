#include <stdio.h>

int main(void)
{
	char input_alpha; // 1바이트 문자형 변수 선언

	printf("알파벳 입력 : ");
	scanf_s("%c", &input_alpha, sizeof(input_alpha));

	printf("입력한 알파벳 출력 : %c\n", input_alpha);
	printf("입력한 알파벳의 아스키코드값 : %d\n", input_alpha);
	return 0;
}