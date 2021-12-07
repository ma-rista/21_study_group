#include <stdio.h>
#include <stdlib.h>    
#include <string.h>  //strcpy_s( ) 함수 원형 선언

struct STD
{
	char name[12];
	int age;
};

int main(void)
{
	int cnt;
	struct STD *p;

	p = (struct STD*)malloc(2 * sizeof(struct STD));  // 동적 메모리 할당

	if (p == NULL)
	{
		printf(" >> 동적 메모리 할당 오류 발생 !! \n");
		exit(1);     // 프로그램 종료(괄호 안의 1은 비정상 종료를 의미)
	}

	/*-- 동적 메모리 사용 --*/
	strcpy_s(p[0].name, sizeof(p[0].name), "최고봉");
	p[0].age = 19;

	strcpy_s(p[1].name, sizeof(p[1].name), "을지문덕");
	p[1].age = 20;

	for (cnt = 0; cnt < 2; cnt++)
	{
		printf(" >> 선수 %d : %8s ", cnt + 1, p[cnt].name);
		printf("(%d세) \n", p[cnt].age);
	}

	free(p);    // 동적 메모리 반납
	return 0;
}