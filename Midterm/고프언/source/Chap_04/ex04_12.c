#include <stdio.h>

int main(void)
{
	char alphabet, add; // 1바이트 문자형 변수 선언
	alphabet = 'A'; // 문자는 반드시 작은따옴표로 감싸야 함 
	add = alphabet + 5; // 문자형 변수에 5를 더하는 연산

	printf("알파벳 대문자를 문자형 변수에 대입 : alphabet = \'A\' \n");
	printf("처음 대입한 알파벳 출력 : %c\n", alphabet);
	printf("처음 알파벳에 5를 더한 알파벳 : %c\n", add);
	printf("변경된 알파벳의 아스키코드값 : %d\n", add);
	return 0;
}