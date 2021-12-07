#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 실수형 데이터의 자릿수 지정 형식");

	printf("|%f|", 358.123456);
	printf(":실수형 기본 자릿수 \n");

	printf("|%.2f|", 358.123456);
	printf(":소수 둘째 자리까지 출력 \n");

	printf("|%6.1f|", 358.123456);
	printf(":전체 6자리, 소수 첫째 자리까지 출력 \n");

	printf("|%-6.1f|", 358.123456);
	printf(":전체 6자리, 왼쪽 정렬, 소수 첫째 자리까지 출력 \n");

	printf("|%7.3f|", 358.123456);
	printf(":전체 7자리, 소수 셋째 자리까지 출력 \n");

	printf("|%010.3f|", 358.123456);
	printf(":전체 10자리, 빈칸은 0으로 채움, 소수 셋째 자리까지 출력 \n");
	return 0;
}