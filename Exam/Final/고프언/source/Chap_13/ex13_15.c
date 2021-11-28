#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 선언

#define ST 5 // 기호 상수 정의

int main(void)
{
	char* str = "C Program"; // 또는 char str[10] = "C Program";
	char data[20] = ""; // 큰따옴표로 초기화 선언

	printf("주어진 문자열 : %s\n", str);
	printf("문자열의 길이 : %d\n", strlen(str));

	strcpy_s(data, sizeof(data), str); // strcpy_s( ) 함수로 문자열 복사
	printf(" \n복사한 문자열 : %s\n\n", data);

	strncpy_s(data, sizeof(data), str, ST); // 주어진 상수 ST만큼 문자열 복사
	printf("5개 복사한 문자열 : %s\n", data);
	printf("문자열의 길이 : %d\n", strlen(data));
	return 0;
}