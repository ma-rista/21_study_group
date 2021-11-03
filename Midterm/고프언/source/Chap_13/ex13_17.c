#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

#define ST 2

int main(void)
{
	char s1[15] = "Space";
	char s2[5] = "Zone";

	printf("s1 문자열 : %s\n", s1);
	printf("s2 문자열 : %s\n", s2);

	strcat_s(s1, sizeof(s1), s2); // 문자열 전체 결합
	printf(" \n문자열 전체 결합 : %s\n", s1);

	strncat_s(s1, sizeof(s1), s2, ST); // 문자열 일부 추가 결합
	printf("문자열 일부 결합 : %s\n", s1);
	return 0;
}