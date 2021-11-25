#include <stdio.h>
#define R 3

int main(void)
{
	int a[R] = { 88, 99, 87 };
	int* p, cnt, hap = 0;
	p = a;

	for (cnt = 0; cnt < R; cnt++)
	{
		hap += *p++;
		printf("%d번째 배열 요소 : %d", cnt + 1, a[cnt]);
		printf(" > 포인터 주소 : %d\n", p);
	}
	printf(" \n%d개의 배열 요소 합계 : %d\n", cnt, hap);
	return 0;
}