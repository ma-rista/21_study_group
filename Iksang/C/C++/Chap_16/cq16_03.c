#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	char title[20];   // 과목 이름
	int score;        // 신청 학점
} ST;

int main(void)
{
	ST *t_zone;      // 동적 메모리 공간을 가리키는 포인터
	int cnt, sum = 0;

	t_zone = (ST*)malloc(sizeof(ST) * 2);   // 동적 메모리 할당

	if (t_zone == NULL)
	{
		printf(" >> 동적 메모리 할당 오류 발생 !! ");
		exit(1);    // 비정상 종료
	}

	printf(" >> 신청 과목 : ");
	gets_s(t_zone[0].title, sizeof(t_zone[0].title));

	printf(" >> 신청 학점 : ");
	scanf_s("%d", &(t_zone[1].score));

	printf(" >> %s %d학점을 신청하였습니다. \n", t_zone[0].title, t_zone[1].score);

	free(t_zone);     // 할당된 동적 메모리 공간 해제
	return 0;
}