#include <stdio.h>
#define R 3 // 환자수에 대한 배열 크기
#define C 5 // 혈압 체크 수에 대한 배열 크기

int main(void)
{
	int cnt, sno = 203012101, total = 0;
	float avg;
	int bd[R][C] = {
	{135, 150, 148, 160, 153},
	{115, 120, 123, 121, 112},
	{132, 129, 128, 133, 130} };

	printf(">> 고혈압 판정 기준 : 수축기 혈압 140 초과 \n");
	for (cnt = 0; cnt < R; cnt++)
	{
		total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
		avg = total / 5.0; // 자료형 자동 변환

		printf(" \n▶ 환자 #%d의 수축기 평균 혈압 및 판정 \n", cnt + 1);
		printf("번호 : %d\n", sno++);
		printf("혈압 : %.2f\n", avg);

		if (avg > 140)
			printf("판정 : 고혈압 \n");

		else
			printf("판정 : 정상 \n");
	}

	return 0;
}