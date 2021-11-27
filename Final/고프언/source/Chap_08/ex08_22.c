#include <stdio.h>
#include <stdlib.h> // exit( ) 함수 사용을 위한 헤더 파일

void score_fun(); // 중간고사와 기말고사 점수를 입력받는 함수
char grade_fun(int jumsu); // 입력한 점수의 등급을 계산하는 함수
char alpa_err(char op); // Y, N 외 알파벳 입력하면 메시지 출력하는 함수
void jumsu_err(int jumsu); // 0~100 이외 숫자 입력하면 메시지 출력하는 함수
void end_fun(char op); // main( ) 함수에서 N을 입력받으면 프로그램 종료

void main()
{
	char choice;
	int jumsu_input;

	do {
		printf("[main( ) 함수 영역] \n");
		printf("프로그램을 시작하시겠습니까?(Yes/No) : _ \b");
		scanf_s("%c", &choice);

		switch (choice) {
		case 'Y':
		case 'y':
			score_fun();
			getchar();
			break;
		case 'N':
		case 'n':
			end_fun(choice);
			break;
		default:
			alpa_err(choice);
			getchar();
			break;
		}
	} while (1);
}

void score_fun() // 사용자 정의 함수
{
	int jumsu_m, jumsu_f, total = 0;
	printf(" \n[score_fun( ) 함수 영역] \n");

	printf("중간고사 점수 입력(50점 만점) : __ \b\b");
	scanf_s("%d", &jumsu_m);

	if (jumsu_m < 0 || jumsu_m >50)
		jumsu_err(jumsu_m);
	else
		total += jumsu_m;

	printf("기말고사 점수 입력(50점 만점) : __ \b\b");
	scanf_s("%d", &jumsu_f);

	if (jumsu_f < 0 || jumsu_f >50)
		jumsu_err(jumsu_f);
	else {
		total += jumsu_f;
		grade_fun(total);
		getchar();
		main();
	}
}

char alpa_err(char op)
{
	printf(" \n[alpa_err( ) 함수 영역] \n");
	return printf("main( ) 함수에서 입력한 알파벳 %c는(은) 유효하지 않습니다. \n\n", op);
}

char grade_fun(int jumsu)
{
	printf(" \n[grade_fun( ) 함수 영역] \n");
	if (jumsu >= 95 && jumsu <= 100) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : A+학점 \n\n");
	}
	else if (jumsu >= 90 && jumsu <= 94) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : A0학점 \n\n");
	}
	else if (jumsu >= 85 && jumsu <= 89) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : B+학점 \n\n");
	}
	else if (jumsu >= 80 && jumsu <= 84) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : B0학점 \n\n");
	}
	else if (jumsu >= 75 && jumsu <= 79) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : C+학점 \n\n");
	}
	else if (jumsu >= 70 && jumsu <= 74) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : C0학점 \n\n");
	}
	else if (jumsu >= 65 && jumsu <= 69) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : D+학점 \n\n");
	}
	else if (jumsu >= 60 && jumsu <= 64) {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : D0학점 \n\n");
	}
	else {
		printf("score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf("등급 : F학점 \n");
	}
}

void jumsu_err(int jumsu)
{
	printf(" \n[jumsu_err( ) 함수 영역] \n");
	printf("점수 %d는(은) 유효 범위가 아닙니다. \n", jumsu);
	score_fun();
}

void end_fun(char op)
{
	printf(" \n[end_fun( ) 함수 영역] \n");
	printf("main( ) 함수에서 프로그램 종료를 요청했습니다. \n");
	printf("알파벳 \"%c\"을 전달받아 프로그램을 종료합니다. \n", op);
	exit(0); // 프로그램 종료
}