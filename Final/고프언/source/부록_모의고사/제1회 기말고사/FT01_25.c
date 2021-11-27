#include <stdio.h>
#include <stdlib.h>

#define SR 2      // 2개월 카운트 기호 상수
#define SC 3      // 3개 품목 카운트 기호 상수 
#define DR 3      // 3개 품목 입력 기호 상수
#define DC 9      // 문자열 배열 요소 처리 기호 상수

int main(void)
{
	system("title 제1회 기말고사 25번");

	int score[SR][SC];                        // 2개월 3개 품목 처리
	char det[DR][DC] = { "CPU", "RAM", "HDD" };
	int row, col, sum = 0, total = 0;    

	for (row = 0; row < SR; row++)            // 2개월 데이터 처리 반복 수행
	{
		printf("\n >> %d월 품목별 수량 입력 \n", row + 1);
		printf("---------------------------- \n");

		for (col = 0; col < DR; col++)        // 3개 품목 수량 입력 반복 수행
		{
			printf(" >> %s : ", det[col]);
			scanf_s("%d", &score[row][col]);  // 품목별 수량 입력
			sum += score[row][col];
		}
		printf(" >> 합계 ......... [ %d ] \n", sum);
		total += sum;                         // 총 판매 수량 계산
		sum = 0;                              // 품목별 합계를 위한 초기화
	}
	printf("---------------------------- \n");
	printf(" >> 총판매수량 ... [ %d ] \n", total);
	return 0;
}