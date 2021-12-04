#include <stdio.h>

int main(void)
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int(*ap)[5]; // int[5]를 가리키는 배열 포인터 ap 선언
	int cnt;

	printf("배열 선언 : int a[5] = {10, 20, 30, 40, 50} \n");
	printf("배열 포인터 선언 : int (*ap)[5] \n");

	ap = &a; // 배열 전체 주소를 계산하여 대입
	printf(" \n배열 포인터 ap의 주소 : %d\n\n", ap);

	for (cnt = 0; cnt < 5; cnt++)
		printf("%d번째 요소 : %d\n", cnt + 1, (*ap)[cnt]);

	return 0;
}