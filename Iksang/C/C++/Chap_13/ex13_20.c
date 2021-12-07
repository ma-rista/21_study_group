#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

int main(void)
{
	char str[] = "Have a Good Time";

	printf("문자열 : %s\n", str);

	_strrev(str); // 문자열을 역순으로 변환

	printf(" \n문자열을 역순으로 변환 \n");
	printf("_strrev( ) 함수 사용 : %s\n", str);

	_strrev(str); // 문자열을 다시 역순으로 변환

	printf("문자열을 원래대로 변환 \n");
	printf("_strrev( ) 함수 사용 : %s\n", str);
	return 0;
}