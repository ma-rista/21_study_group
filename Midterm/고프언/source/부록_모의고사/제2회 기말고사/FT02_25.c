#include <stdio.h>
#include <stdlib.h>    // malloc( ) 함수와 free( ) 함수 원형 선언

#define MAX 3

int main(void)
{
	int cnt, sum = 0;
	char yn;
	float avg;
	int *score;  // 포인터를 선언하여 동적 메모리의 주소로 사용

	score = (int*)malloc(sizeof(int)*MAX);  // 동적 메모리 할당

	if (score == NULL)
	{
		printf(" >> 동적 메모리 할당 오류 발생 !! \n");
		exit(1);     // 프로그램 종료(괄호 안의 1은 비정상 종료를 의미)
	}

	/*-- 동적 메모리 사용 --*/
	do {
		for (cnt = 0; cnt < MAX; cnt++)
		{
			printf(" >> 과목 %d 점수 : ", cnt + 1);
			scanf_s("%d", &score[cnt]);
			sum += score[cnt];
		}
		avg = (float)sum / MAX;

		getchar();      // [Enter] 킷값 제거
		printf(" >> 총점 ..... %5d \n", sum);
		printf(" >> 평균 ..... %.2f \n", avg);

	re:
		printf("\n >> 프로그램 다시 실행?(Y/N) : ");
		scanf_s("%c", &yn);
		getchar();     // [Enter] 킷값 제거

		if (yn == 'Y' || yn == 'y')
		{
			sum = 0;            // 반복 수행하기 위해 초기화
			continue;
		}
		else if (yn == 'N' || yn == 'n')
		{
			printf(" >> 프로그램을 종료합니다. \n");
			free(score);    // 동적 메모리 반납
			return 0;
		}
		else
		{
			printf(" >> 문자 입력 오류 !! \n");
			goto re;
		}
	} while (1);
}