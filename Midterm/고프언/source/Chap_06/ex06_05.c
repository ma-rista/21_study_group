#include <stdio.h>

int main(void)
{
	char alphabet;

	printf("알파벳 입력 : ");
	scanf_s("%c", &alphabet, sizeof(alphabet));

	if (alphabet >= 'A' && alphabet <= 'Z') // 알파벳이 대문자인지 판별
	{
		printf("입력한 알파벳 %c는(은) \"대문자 \"이고 \n", alphabet);
		printf("아스키코드값은 %d입니다. \n", alphabet);
	}
	else
	{
		printf("입력한 알파벳 %c는(은) \"소문자 \"이고 \n", alphabet);
		printf("아스키코드값은 %d입니다. \n", alphabet);
	}

	return 0;
}