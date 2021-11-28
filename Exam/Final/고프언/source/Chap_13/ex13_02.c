#include <stdio.h>

int main(void)
{
	char* str = "Hello~";

	printf("문자열 출력 : %s\n", str);
	str = "Have a good time!"; // 다른 문자열 상수를 포인터에 저장 
	printf("문자열 출력 : %s\n", str);
	return 0;
}