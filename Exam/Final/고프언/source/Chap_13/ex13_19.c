#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

int main(void)
{
	char s[] = "C Professional Project Team";

	printf("문자열 : %s\n", s);
	printf("문자열 마지막부터 \'P\' 문자가 포함된 부분 검색 \n");
	printf(" \nstrrchr( ) 함수 사용 : %s\n\n", strrchr(s, 'P'));

	printf("문자열에서 \"Pro\" 문자열이 포함된 부분 검색 \n");
	printf("strstr( ) 함수 사용 : %s\n", strstr(s, "Pro"));
	return 0;
}