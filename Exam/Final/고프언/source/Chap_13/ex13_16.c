#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

int main(void)
{
	char s1[20];
	char s2[20];
	int result;

	printf("s1 문자열 입력 : ");
	gets_s(s1, sizeof(s1)); // 또는 gets_s(s1, 20);

	printf("s2 문자열 입력 : ");
	gets_s(s2, sizeof(s2)); // 또는 gets_s(s2, 20);

	result = strcmp(s1, s2);
	printf("\nstrcmp( ) 함수로 문자열 비교 결과\n");

	if (result > 0)
	{
		printf("s1 > s2 비교 결과값 : %d\n", result);
		printf("문자열 비교 : s1이 s2 문자열 뒤에 있음\n");
	}
	else if (result == 0)
	{
		printf("s1 == s2 비교 결과값 : %d\n", result);
		printf("문자열 비교 : s1과 s2 문자열이 같음\n");
	}
	else
	{
		printf("s1 < s2 비교 결과값 : %d\n", result);
		printf("문자열 비교 : s1이 s2 문자열 앞에 있음 \n");
	}
	return 0;
}