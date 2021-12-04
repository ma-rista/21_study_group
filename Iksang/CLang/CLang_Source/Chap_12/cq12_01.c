#include <stdio.h>

int main(void)
{
	char* ps;
	char st[11] = { 0 };

	ps = st; // 배열 요소를 포인터에 대입

	printf("문자열 입력(10바이트 이내) : __________ \b\b\b\b\b\b\b\b\b\b");
	scanf_s("%s", st, sizeof(st));

	for (int cnt = 0; cnt < 10; cnt++)
		printf(" *(ps + %d) : %c\n", cnt, *(ps + cnt));

	return 0;
}