#include <stdio.h>
#define CP 10 // 배열의 크기

int main(void)
{
	char yn; // 시작과 종료 문자 변수
	int choice, cnt; // 자동차 모델 번호 선택과 카운트 변수
	int car[CP] = { 0 }; // 배열 요소 값을 모두 0으로 초기화 

	do
	{
		printf("자동차 모델을 선택하겠습니까? (Y / N) : ");
		scanf_s(" %c", &yn, sizeof(yn));

		if (yn == 'N' || yn == 'n')
			break;

		else if (yn == 'Y' || yn == 'y')
		{
			printf("자동차 모델 번호 : 1 2 3 4 5 6 7 8 9 10\n");
			printf("자동차 예약 현황 :");

			for (cnt = 0; cnt < CP; cnt++)
				printf("%2d", car[cnt]);

			printf(" \n");

		re_input: // goto 문 레이블 

			printf(" \n자동차 모델 선택(1 ~ 10) : ");
			scanf_s("%d", &choice);

			if (choice < 1 || choice > 10)
			{
				printf("잘못 입력했습니다! \n");
				printf("모델 번호를 다시 입력하세요. \n");
				goto re_input;
			}
			else
			{
				if (car[choice - 1] == 0) // 예약되지 않은 자동차 모델
				{
					car[choice - 1] = 1; // 예약 확정
					printf("예약 완료! \n");
				}
				else
				{
					printf("[No.%d] 모델은 이미 예약되었습니다. \n", choice);
					printf("모델 번호를 다시 선택하세요. \n");
					goto re_input;
				}
			}
		}
		else
		{
			printf("알파벳 입력 오류! \n");
			printf("알파벳은 대소문자 구별 없이 Y 또는 N만 허용합니다. \n");
			printf("알파벳을 다시 입력하시오. \n\n");
		}
	} while (1);

	printf("자동차 모델 [No.%d] 예약 완료 후 프로그램 종료 \n", choice);
	return 0;
}