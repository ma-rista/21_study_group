#include <stdio.h>
#include <ctype.h> // 입력 문자를 검사하는 함수의 헤더 파일

int main(void)
{
	int op;

	printf("문자 입력 : ");
	op = getchar(); // 입력받은 문자를 변수 op에 저장

	if (isalnum(op))
		printf("입력한 %c는(은) 숫자 또는 알파벳입니다. \n", op);

	else
		printf("입력한 %c는(은) 숫자 또는 알파벳이 아닙니다. \n", op);

	return 0;
}