#include <stdio.h>
#define P 2 // 2개 제조사에 대한 배열 크기
#define R 2 // 2개 차종에 대한 배열 크기
#define C 3 // 3년간 주유 총액에 대한 배열 크기 
#define K 2 // 2개 제조사 문자열에 대한 배열 크기
#define M 7 // 배열 요소 = {"현대", "쌍용" }
#define CR 2 // 2개 차종에 대한 배열 크기
#define CC 9 // 배열 요소 = {"승용차", "SUV" }

int main(void)
{
	int pg, row, col, cnt = 0, total = 0;
	float avg;
	int oil[P][R][C]; // 3차원 배열 선언 
	char pro[K][M] = { "현대", "쌍용" }; // 제조사별 배열 초기화
	char car[CR][CC] = { "승용차", "SUV" }; // 차종별 배열 초기화

	printf("%s와 %s의 제조사별 주유 금액 산출 시작 \n\n", pro[0], pro[1]);

	for (pg = 0; pg < P; pg++) // 제조사별 반복 수행
	{
		for (row = 0; row < R; row++) // 차종별 반복 수행
		{
			printf("제조사 : %s, 3차원 배열 중 [면] \n", pro[pg]);
			printf("1.차종 스타일 : %s, 3차원 배열 중 [행] \n", car[row]);
			printf("2.연차별 주유 금액(단위:백만 원), 3차원 배열 중 [열] \n\n");

			for (col = 0; col < C; col++) // 3년간 주유 금액 입력 반복 수행
			{
				printf("%d년차 주유 금액 : ", col + 1);
				scanf_s("%d", &oil[pg][row][col]);
			}

			total = oil[pg][row][0] + oil[pg][row][1] + oil[pg][row][2];
			avg = total / 3.0; // 자료형 자동 변환

			printf(" \n3년간 총 주유 금액 : %d백만 원 \n", total);
			printf("연간 평균 주유 금액 : %.2f백만 원 \n\n", avg);
		}
	}
	return 0;
}