#include <stdio.h>
#define R 2 // 학생수에 대한 배열 크기
#define C 3 // 과목수에 대한 배열 크기 

int main(void)
{
	int row, col, cnt, class, total = 0;
	float avg;
	int st[R][C];

re:
	printf("학급수 입력(1~3) : ");
	scanf_s("%d", &class);

	if (class < 1 || class > 3)
	{
		printf("입력값 오류! \n");
		printf("학급수를 다시 입력하세요. \n\n");
		goto re;
	}
	printf("%d개 학급에 대한 성적 처리 시작 \n", class);

	for (cnt = 1; cnt <= class; cnt++)
	{
		printf("학급%d 수행 시작 \n\n", cnt);

		for (row = 0; row < R; row++) // 2명의 학생 반복 수행
		{
			printf("학급%d의 학생%d의 3개 과목 점수 입력 \n", cnt, row + 1);

			for (col = 0; col < C; col++) // 3개 과목 점수 입력
			{
				printf("과목%d 점수 : ", col + 1);
				scanf_s("%d", &st[row][col]);
			}

			total = st[row][0] + st[row][1] + st[row][2]; // 총점 산출
			avg = total / 3.0; // 자동 자료형 변환
			printf("총점 : %d\n", total);
			printf("평균 : %.2f\n\n", avg);
		}
	}
	printf("전체 %d개 학급의 성적 처리 프로그램 종료! \n", class);
	return 0;
}