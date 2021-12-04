#include <stdio.h>
#include <stdlib.h>    
#include <string.h>             // strcpy_s( ) 함수 원형 선언

struct STD
{
	int sno;
	char name[12];
	char dept[30];
};

int main(void)
{
	int cnt;
	struct STD *p;

	p = (struct STD*)malloc(3 * sizeof(struct STD));  // 동적 메모리 할당

	if (p == NULL)
	{
		printf(" >> 동적 메모리 할당 오류 발생 !! \n");
		exit(1);               // 프로그램 종료(괄호 안의 1은 비정상 종료를 의미)
	}

	/*-- 동적 메모리 사용 --*/
	p[0].sno = 20231235;
	strcpy_s(p[0].name, sizeof(p[0].name), "홍길동");
	strcpy_s(p[0].dept, sizeof(p[0].dept), "법학과");

	p[1].sno = 20250008;
	strcpy_s(p[1].name, sizeof(p[1].name), "이순신");
	strcpy_s(p[1].dept, sizeof(p[1].dept), "해양학과");

	for (cnt = 0; cnt < 2; cnt++)
	{
		printf(" 학번 : %d\n", p[cnt].sno);
		printf(" 성명 : %s\n", p[cnt].name);
		printf(" 학과 : %s\n\n", p[cnt].dept);
	}

	free(p);    // 동적 메모리 반납
	return 0;
}