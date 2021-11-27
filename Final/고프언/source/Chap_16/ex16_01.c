#include <stdio.h>
#include <stdlib.h>    // malloc( ) 함수와 free( ) 함수 원형 선언

int main(void)
{
	int cnt;           // 반복문의 카운트 변수
	int *score;        // 포인터를 선언하여 동적 메모리의 주소로 사용
	score = (int*)malloc(3 * sizeof(int));  // 동적 메모리 할당

	if (score == NULL)
	{
		printf(" 동적 메모리 할당 오류 발생 \n");
		exit(1);      // 프로그램 종료(괄호 안의 1은 비정상 종료를 의미)
	}  

	/*-- 동적 메모리 사용 --*/
	score[0] = 97;
	score[1] = 88;
	score[2] = 93;

	for (cnt = 0; cnt < 3; cnt++)
		printf(" %d번째 점수 : %d\n", cnt + 1, score[cnt]);

	free(score);      // 동적 메모리 반납
	return 0;
}