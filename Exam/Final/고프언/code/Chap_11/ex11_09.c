#include <stdio.h>

int main(void)
{
	int a[] = { 100, 200, 300 }; // 배열의 크기는 3으로 자동 설정됨
	int* pa;

	pa = a; // 배열을 대입할 경우 &를 사용하지 않음을 주의!

	printf("int a[] = {100, 200, 300}일 때 포인터 증감 연산 \n");

	printf(" \n1.포인터 *++pa의 증감 연산을 수행한 주소값과 데이터값 \n");
	printf("포인터 현재 주소값 : %d\n", pa);
	printf("현재 포인터 주소의 데이터값 : %d\n", *a);
	printf("포인터 *++pa 수행 후 데이터값 : %d\n", *++pa);
	printf("포인터 *++pa 수행 후 주소값 : %d\n", pa);

	printf(" \n2.포인터 *--pa의 증감 연산을 수행한 주소값과 데이터값 \n");
	printf("포인터 현재 주소값 : %d\n", pa);
	printf("포인터 *--pa 수행 후 데이터값 : %d\n", *--pa);
	printf("포인터 *--pa 수행 후 주소값 : %d\n", pa);

	printf(" \n3.포인터 ++*pa 증감 연산을 수행한 주소값과 데이터값 \n");
	printf("포인터 현재 주소값 : %d\n", pa);
	printf("포인터 ++*pa 수행 후 데이터값 : %d\n", ++ * pa);
	printf("포인터 ++*pa 수행 후 주소값 : %d\n", pa);
	return 0;
}