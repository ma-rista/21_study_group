#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	system("title 배열로 문자열 처리");

	char ch; // 문자형 변수 선언
	char str[10]; // 배열을 이용한 문자열형 변수 선언

	printf("1.문자 입력:");
	scanf_s("%c", &ch, sizeof(ch)); // 입력한 문자 변수를 메모리 주소에 저장 

	printf("2.문자열 입력:");
	scanf_s("%s", str, sizeof(str)); // 배열로 문자열을 입력받을 때는 & 생략

	printf("입력한 문자 출력:%c\n", ch);
	printf("입력한 문자열 출력:%s\n", str);
	return 0;
}