#include <stdio.h>

int main(void)
{
	int score[5] = { 87, 92, 89, 98, 78 }; // 배열 선언과 초기화
	int cnt; // 카운트 변수

	for (cnt = 0; cnt < 5; cnt++) // 인덱스 5개 반복 출력
		printf("score[%d] = %d\n", cnt, score[cnt]);

	return 0;
}