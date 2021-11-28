#include <stdio.h>

int main(void)
{
	char arr[6] = "space"; // 문자열 상수 대입
	char input[13]; // 키보드로 입력받을 문자열형 변수 선언

	printf("arr[6] = \"space\" \n");
	printf("문자열 상수 출력: %s\n", arr);

	printf("문자열 입력 : ");
	scanf_s("%s", input, sizeof(input));

	printf("제시한 문자열 상수 + 입력한 문자열 = %s%s\n", arr, input);
	return 0;
}