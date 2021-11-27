#include <stdio.h>

int main(void)
{
	char munja, ascii; // 1바이트 문자형 변수 선언
	munja = 'S';
	ascii = 75;

	printf("munja : %c\n", munja);
	printf("ascii : %d\n", ascii);
	printf("알파벳 S의 아스키코드값 : %d\n", munja);
	printf("상수 75에 대한 알파벳 : %c\n", ascii);
	return 0;
}