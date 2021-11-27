#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

int main(void)
{
	char str[] = "Let's do-our_best! today";
	char div[] = " -_!"; // 구분자는 공백, 하이픈, 언더바, 느낌표
	char* tok; // 분리된 토큰 저장할 포인터 변수
	char* context; // 분리된 토큰 저장하기 위한 주소 할당 포인터 변수
	int cnt = 1;

	printf("주어진 문자열 : %s\n", str);
	printf("구분자 : 공백( \" \"), 하이픈(-), 언더바(_), 느낌표(!) \n\n");

	tok = strtok_s(str, div, &context); // 구분자를 기준으로 문자열 분리

	while (tok != NULL)
	{
		printf("%d번째 토큰 : %s\n", cnt, tok);
		tok = strtok_s(NULL, div, &context);// 다음 토큰 구하기 위해 NULL 사용
		cnt++;
	}
	return 0;
}