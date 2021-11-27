#include <stdio.h>

int main(void)
{
	char name[20];
	char dept[30];

	printf("성명 : ");
	gets_s(name, 20); // 키보드로 문자열 입력

	printf("학과 : ");
	gets_s(dept, 30); // 키보드로 문자열 입력

	printf(" \n입력 사항 출력 \n");
	printf("성명 : ");
	puts(name); // 입력한 문자열 출력

	printf("학과 : ");
	puts(dept); // 입력한 문자열 출력
	return 0;
}