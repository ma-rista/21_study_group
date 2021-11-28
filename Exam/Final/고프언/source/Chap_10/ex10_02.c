#include <stdio.h>

#define DT 3 // 배열의 크기

int main(void)
{
	int score[DT]; // 배열 선언
	int cnt, sum = 0;
	float avg;

	for (cnt = 0; cnt < DT; cnt++) // 3개 과목 점수 반복 입력
	{
		printf("과목%d 점수 : ___ \b\b\b", cnt + 1);
		scanf_s("%d", &score[cnt]);
	}

	for (cnt = 0; cnt < DT; cnt++) // 3개 과목 총점 산출
		sum += score[cnt];

	avg = (float)sum / DT; // 평균 산출

	printf("총점 : %d\n", sum);
	printf("평균 : %.2f\n", avg);
	return 0;
}