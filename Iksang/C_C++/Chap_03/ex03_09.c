#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 문자열형 데이터의 자릿수 지정 형식");

	printf("|%s|", "Visual-C++");
	printf(":문자열형 기본 자릿수 \n");

	printf("|%12s|", "Visual-C++");
	printf(":전체 12자리, 오른쪽 정렬 \n");

	printf("|%-12s|", "Visual-C++");
	printf(":전체 12자리, 왼쪽 정렬 \n");
	return 0;
}