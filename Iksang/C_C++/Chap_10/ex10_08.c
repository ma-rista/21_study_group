#include <stdio.h>
#define DT 5 // 배열의 크기
int sv(int score[], int size); // 사용자 정의 함수 선언

int main(void)
{
	int score[DT] = { 88, 96, 75, 81, 99 };
	int sum = 0;
	float avg;

	printf("상수> #define DT 5\n");
	printf("배열> score[DT] = {88, 96, 75, 81, 99}; \n");

	sum = sv(score, DT); // 사용자 정의 함수(배열 이름, 기호 상수)
	avg = sum / 5.0; // 실수형으로 자료형 자동 변환

	printf("반환> 5개 과목의 총점 : %d\n", sum);
	printf("산출> 5개 과목의 평균 : %.2f\n", avg);
	return 0;
}

int sv(int score[], int size) // 사용자 정의 함수 정의
{
	int cnt, total = 0;

	printf(" \n사용자 정의 함수로 총점 계산 \n");

	for (cnt = 0; cnt < size; cnt++) // 총점 산출
		total += score[cnt];

	return total;
}