#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

int main(void)
{
	char str[] = "Have a Good Time";

	printf("주어진 문자열 : %s\n", str);

	_strupr_s(str, sizeof(str)); // 문자열을 모두 대문자로 변환

	printf("\n알파벳을 모두 대문자로 변환\n");
	printf("_strupr_s( ) 함수 사용 : %s\n", str);

	_strlwr_s(str, sizeof(str)); // 문자열을 모두 소문자로 변환

	printf("알파벳을 모두 소문자로 변환\n");
	printf("_strlwr_s( ) 함수 사용 : %s\n", str);
	return 0;
}