#include <stdio.h>
#define R 5

int main(void)
{
	int a[R] = { 100, 200, 300, 400, 500 };
	int* pa, cnt, hap = 0;

	pa = a; // 배열을 대입할 경우 &를 사용하지 않음을 주의!
	printf("int a[] = {100, 200, 300, 400, 500}일 때\n\n");

	for (cnt = 0; cnt < R; cnt++)
	{
		hap += *pa++;
		printf("%d번째 배열 요소 : %d", cnt + 1, a[cnt]);
		printf("포인터 주소 : %d\n", pa);
	}
	printf("\n%d개의 배열 요소 합계 : %d\n", cnt, hap);
	return 0;
}