#include <stdio.h>

int main(void)
{
	int a[5] = { 88, 97, 85, 93, 99 };
	int(*ap)[5]; // int[5]를 가리키는 배열 포인터 ap 선언
	int cnt;

	ap = &a; // 배열 전체 주소를 계산하여 대입
	printf("a[5] = {88, 97, 85, 93, 99} \n");

	for (cnt = 0; cnt < 5; cnt++)
		printf("%d번째 요소 : %d\n", cnt + 1, (*ap)[cnt]);

	return 0;
}