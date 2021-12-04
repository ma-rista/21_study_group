#include <stdio.h>
int main(void)
{
	int cnt;
	char s[3][20];// 지원 학과 배열 크기는 3, 학과명 배열 크기는 20
	printf("지원 학과 순위 \n");
	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%02d순위 : ", cnt + 1);
		scanf_s("%s", s[cnt], 20); // [열] 크기만큼 설정
	}
	printf("\n지원 학과 순위 출력\n");
	for (cnt = 0; cnt < 3; cnt++)
		printf("%02d순위 지원 : %s\n", cnt + 1, s[cnt]);
	return 0;
}