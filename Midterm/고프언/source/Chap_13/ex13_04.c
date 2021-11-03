#include <stdio.h>

int main(void)
{
	char munja;

	printf("문자 입력 : ");
	munja = getchar(); // 문자 입력

	printf("문자 출력 : ");
	putchar(munja); // 입력받은 문자 출력
	return 0;
}