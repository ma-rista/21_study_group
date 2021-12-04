#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

int main(void)
{
	char s[] = "school";
	char* p; // 발견한 문자의 위치를 저장할 포인터 변수
	char chk;

	printf("문자열 : %s\n", s);
	printf("검색할 문자 입력 : ");
	scanf_s("%c", &chk, sizeof(s));

	p = strchr(s, chk); // 문자열에서 찾을 문자 검색 후 포인터 변수에 저장

	if (p != NULL) // NULL 문자가 아닐 경우
		printf("문자열 %s에는 \'%c\'가 존재합니다. \n", s, chk);
	else
		printf("문자열 %s에는 \'%c\'가 존재하지 않습니다. \n", s, chk);

	return 0;
}