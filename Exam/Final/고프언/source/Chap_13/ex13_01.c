#include <stdio.h>

int main(void)
{
	char sa[30] = ""; // 문자형 배열 초기화
	int cnt = 0;

	printf("문자열 입력 : ");
	scanf_s("%s", sa, sizeof(sa)); // 버퍼형 입력 함수 사용

	while (sa[cnt] != '\0') // 또는 while(sa[cnt] != 0)
		cnt++; // 문자열 길이 구함

	printf("입력한 문자열 출력 : %s\n", sa);
	printf("문자열 길이 : %d바이트 \n", cnt);
	return 0;
}