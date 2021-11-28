#include <stdio.h>
#include <stdlib.h> // strcpy( ) 함수 사용을 위한 헤더 파일

struct std { // 구조체 std 선언
	int sno;
	char name[10];
	float avg;
};

int main(void)
{
	struct std s; // 구조체 변수 s 선언

	printf("구조체 멤버 초기화 선언 \n");
	s.sno = 20201233;
	strcpy(s.name, "홍길동"); // 문자 배열은 strcpy( ) 함수 사용
	s.avg = 88.33;

	printf("구조체 멤버 출력 \n");
	printf("학번 : %d\n", s.sno);
	printf("성명 : %s\n", s.name);
	printf("점수 : %.2f\n", s.avg);
	return 0;
}