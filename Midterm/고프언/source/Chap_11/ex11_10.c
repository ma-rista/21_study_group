#include <stdio.h>
#define R 5

int main(void)
{
	int a[] = { 100, 200, 300, 400, 500 };
	int cnt;

	printf("int a[] = {100, 200, 300, 400, 500}일 때 \n");
	printf(" \n1.배열 요소의 주소값 출력 \n");

	for (cnt = 0; cnt < R; cnt++)
		printf("%d번째 배열 요소 a[%d] = &a[%u] \n", cnt + 1, cnt, &a[cnt]);

	printf(" \n2.주소값과 배열 요소의 값 출력 \n");
	printf("배열의 현재 주소값 : a는 %u\n", a);
	printf("첫 번째 배열 요소의 값 : *a는 %u\n", *a);

	printf(" \n증감 연산 후 주소값 : a + 1은 %u\n", a + 1);
	printf("증감 연산 후 배열 요소의 값 : *(a + 1)은 %u\n", *(a + 1));

	printf(" \n배열의 현재 주소값 : a는 %u\n", a);
	printf("증감 연산 후 주소값 : a + 2는 %u\n", a + 2);
	printf("증감 연산 후 배열 요소의 값 : *(a + 2)는 %u\n", *(a + 2));
	return 0;
}