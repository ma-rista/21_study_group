#include <stdio.h>
#include <ctype.h> // 입력 문자를 검사하는 함수의 헤더 파일

int main(void)
{
	int op; // 정수형 변수 선언

	printf("문자 입력 : ");

	op = getchar(); // 키보드로 문자를 입력받아 변수 op에 저장

	if (isalpha(op)) // 알파벳인지 검사
	{
		printf("입력한 문자 %c은(는) 알파벳이 맞습니다.\n", op);

		if (islower(op)) // 알파벳이 소문자일 경우
		{
			op = toupper(op); // 알파벳을 대문자로 변환
			printf("알파벳을 대문자 %c로 변환합니다.\n", op);
		}
		else
		{
			op = tolower(op); // 알파벳을 소문자로 변환
			printf("알파벳을 소문자 %c로 변환합니다.\n", op);
		}
	}
	else
		printf("입력한 %c는(은) 알파벳이 아닙니다. \n", op);

	return 0;
}