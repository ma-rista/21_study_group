#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	char title[30];   // 과목 이름
	int score;        // 신청 학점
} ST;

int main(void)
{
	ST* t_zone;       // 동적 메모리 공간을 가리키는 포인터
	int max, cnt, sum = 0;

	printf(" 신청 과목 수 입력 : ");
	scanf_s("%d", &max);

	if (max < 0)
	{
		printf(" 음의 정수는 허용하지 않습니다. \n");
		exit(1);
	}

	getchar();                                // 엔터키 제거
	t_zone = (ST*)malloc(sizeof(ST) * max);   // 동적 메모리 할당

	if (t_zone == NULL)
	{
		printf(" >> 동적 메모리 할당 오류 발생 !! ");
		exit(1);    // 비정상 종료
	}

	for (cnt = 0; cnt < max; cnt++)
	{
		printf(" 신청 과목 : ");
		gets_s(t_zone[cnt].title, sizeof(t_zone[cnt].title));

		printf(" 신청 학점 : ");
		scanf_s("%d", &(t_zone[cnt].score));

		getchar();                          // 엔터키 제거
		sum += t_zone[cnt].score;
	}
	printf("\n 신청한 과목 \t\t 학점 \n");

	for (cnt = 0; cnt < max; cnt++)
		printf(" %s \t\t %3d \n", t_zone[cnt].title, t_zone[cnt].score);

	printf(" 신청한 총 학점은 %d\n", sum);

	free(t_zone);                           // 할당된 동적 메모리 공간 해제
	return 0;
}