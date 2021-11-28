#include <stdio.h>

void Pr_ch(char ch, int num);     // 사용자 정의 함수 선언

int main(void)
{
	char input, choice;
	int n;

	do {
		printf("\n >> 입력 예시 : S 5 (알파벳 [공백] 숫자 입력)\n");
		printf(" >> 문자와 횟수(정수)를 입력 : ");

		scanf_s("%c %d", &input, sizeof(input), &n);
		Pr_ch(input, n);              // 함수 호출 및 input과 n을 매개변수로 전달
		getchar();

	re:
		printf("\n >> 프로그램 다시 실행?(Y/N) : ");
		scanf_s("%c", &choice);
		getchar();

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
		{
			printf(" >> 프로그램을 종료합니다. \n");
			return 0;
		}
		else
		{
			printf(" >> 문자입력 오류 !! \n");
			goto re;
			getchar();
		}
	} while (1);
}

void Pr_ch(char ch, int num)   // 함수 정의
{
	int cnt;                   // 카운트 변수

	printf(" >> ");

	for (cnt = 1; cnt <= num; cnt++)
		printf(" %c ", ch);

	printf(" ..... [ %d회 출력 완료 ] \n", cnt - 1);
}