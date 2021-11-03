#include <stdio.h>

int main(void)
{
	char chs1[6] = "apple"; // null 문자가 들어갈 공간 확보
	char chs2[5] = "apple"; // null 문자가 들어갈 공간 확보 안됨

	printf("배열 크기 6: %s\n", chs1);
	printf("배열 크기 5: %s\n", chs2);
	return 0;
}