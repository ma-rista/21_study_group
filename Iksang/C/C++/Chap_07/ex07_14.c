#include <stdio.h>

int main(void)
{
	int jumsu, cnt = 1; // 입력받을 변수와 반복 횟수 카운트 변수
	char op; // 프로그램 반복 수행을 선택할 문자

	do {
		printf("<%d회 실행> \n", cnt);
		printf("프로그램을 시작하겠습니까? (Y/N) : ");

		scanf_s("%c", &op, sizeof(op));

		if (op == 'N' || op == 'n')
		{
			printf("총 %d회 수행 후 종료합니다. \n", cnt);
			break; // 반복문을 빠져나감
		}
		else if (op == 'Y' || op == 'y')
		{
		re_jumsu: // goto 문으로 강제 이동 레이블
			printf("점수 입력 : ");
			scanf_s("%d", &jumsu);

			if (jumsu <= 100 && jumsu >= 90)
				printf("A학점 \n\n");
			else if (jumsu < 90 && jumsu >= 80)
				printf("B학점 \n\n");
			else if (jumsu < 80 && jumsu >= 70)
				printf("C학점 \nn");
			else if (jumsu < 70 && jumsu >= 60)
				printf("D학점 \n\n");
			else if (jumsu < 60 && jumsu >= 0)
				printf("F학점 \n\n");
			else {
				printf("점수 %d는(은) 허용 구간이 아닙니다. \n", jumsu);
				printf("점수를 다시 입력하세요. \n");
				goto re_jumsu; // 점수를 다시 입력하도록 강제 이동
			}
			getchar(); // 버퍼 내용 지우기(Enter 키값 제거) 
			cnt++; // 반복 수행 카운트
		}
		else
		{
			printf("입력한 알파벳 %c는(은) 허용되지 않습니다. \n", op);
			printf("알파벳을 다시 입력하세요. \n\n");
			getchar(); // 버퍼 내용 지우기(Enter 키값 제거) 
			cnt++;
		}
	} while (1); // 무한 반복 
	return 0;
}