#include <stdio.h>
#include <ctype.h> // 입력한 문자를 검사하는 함수의 헤더 파일

int main(void)
{
	int op; // 정수형 변수 선언

	printf("문자 입력 : ");
	op = getchar(); // 키보드로 문자를 입력받아 변수 op에 저장

	if (isalpha(op)) // 알파벳인지 검사
	{
		printf("입력한 문자는 알파벳이 맞습니다. \n");

		if (isupper(op)) // 알파벳 대문자인지 검사
			printf("입력한 %c는(은) 알파벳 대문자입니다. \n", op);
		else
			printf("입력한 %c는(은) 알파벳 소문자입니다. \n", op);
	}
	else
		printf("입력한 %c는(은) 알파벳이 아닙니다. \n", op);

	return 0;
}