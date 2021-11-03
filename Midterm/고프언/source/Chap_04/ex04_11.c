#include <stdio.h>

int main(void)
{
	char alphabet; // 1바이트 문자형 변수 선언
	alphabet = 'A'; // 문자는 반드시 작은따옴표로 감싸야 함 

	printf("알파벳 대문자를 문자형 변수에 대입 : alphabet = \'A\' \n");
	printf("알파벳 출력 : %c\n", alphabet);
	printf("아스키코드값 출력 : %d\n", alphabet);
	return 0;
}