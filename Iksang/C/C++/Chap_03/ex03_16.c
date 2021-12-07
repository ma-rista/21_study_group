#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title for 문으로 알파벳 대문자 출력");

	int cnt; // 반복문에서 사용할 카운트 변수

	printf("알파벳 대문자가 출력됩니다. \n");

	for (cnt = 65; cnt <= 90; cnt++)
		printf(" %c", cnt);

	return 0;
}