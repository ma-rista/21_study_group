#include <stdio.h>
#include <ctype.h>              // isupper( )함수와 tolower( ) 함수 사용을 위한 선언

int main(void)
{
	char op;                    // 알파벳 입력 변수
	int input;                  // 프로그램 실행 여부 변수

	do
	{
		printf(" 프로그램 시작(종료는 99) : ");
		scanf_s("%d", &input);

		if (input == 99)        // 키보드로 99가 입력되면 반복문 탈출 후 프로그램 종료
			break;
		getchar();              // 엔터키 제거

		printf(" 알파벳 입력 : ");
		scanf_s("%c", &op, sizeof(op));

		if (isupper(op))         // 알파벳 대문자를 판단하는 함수
			op = tolower(op);    // 알파벳 대문자 → 소문자로 변환 함수

		else if (islower(op))    // 알파벳 소문자를 판단하는 함수
			op = toupper(op);    // 알파벳 소문자 → 대문자로 변환 함수

		printf(" 대소 문자 변환 : %c \n\n", op);
		getchar();      // 엔터키 제거
	} while (1);

	printf(" 프로그램을 종료합니다. \n");
	return 0;
}