#include <stdio.h>

int main(void)
{
	char id[8];
	char pw[10];

	printf("아이디(최대 7자리) : _______ \b\b\b\b\b\b\b");
	scanf_s("%s", id, sizeof(id));

	printf("패스워드(최대 9자리) : _________ \b\b\b\b\b\b\b\b\b");
	scanf_s("%s", pw, sizeof(pw));

	printf(" \n입력한 아이디는 %s, 패스워드는 %s입니다. \n", id, pw);
	return 0;
}