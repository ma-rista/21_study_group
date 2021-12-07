#include <stdio.h>

int main(void)
{
	double d = 3.3058;
	double* pd;

	pd = &d;

	printf("1.포인터 pd의 증감 연산 전 주소값과 데이터값 \n");
	printf("포인터 pd의 현재 주소값 : %u\n", pd);
	printf("포인터 pd의 현재 데이터값 : %f\n", d);

	(*pd)++; // 포인터가 가리키는 주소의 데이터값을 1 증가

	printf(" \n2.포인터 (*pd)++ 증감 연산 후 주소값과 데이터값 \n");
	printf("포인터 pd의 증감 연산 후 주소값 : %u\n", pd);
	printf("포인터 pd의 증감 연산 후 데이터값 : %f\n", d);
	return 0;
}