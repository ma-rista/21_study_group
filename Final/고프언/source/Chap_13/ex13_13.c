#include <stdio.h>

int main(void)
{
	char dept[20];

	printf("다음 세 과목 중에서 전공을 선택하세요. \n");
	printf("웹 언어 / 정보 보안 / 네트워크 \n");

	printf(" \n1.gets_s( ) 함수 사용 : ");
	gets_s(dept, sizeof(dept)); //gets_s를 선언할 경우 크기 지정

	printf("선택한 전공 : ");
	puts(dept);

	printf(" \n2.scanf_s( ) 함수 사용 : ");
	scanf_s("%s", dept, sizeof(dept));

	printf("선택한 전공 : ");
	puts(dept);
	return 0;
}