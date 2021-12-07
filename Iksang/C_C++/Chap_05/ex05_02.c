#include <stdio.h>
#define TM 60 // 1분은 60초

int main(void)
{
	int input, m, s;

	printf("숫자 입력 : ____ \b\b\b\b\b"); // 입력할 부분에 언더바 표시
	scanf_s("%d", &input);

	m = input / TM;
	s = input % TM;

	printf(" 1.입력한 숫자 : %d\n", input);
	printf(" 2.분, 초 단위 : %d분 %d초 \n", m, s);
	return 0;
}