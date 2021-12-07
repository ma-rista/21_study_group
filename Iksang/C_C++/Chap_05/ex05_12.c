#include <stdio.h>

int main(void)
{
	int a = 35, val;
	int* addr; // *는 포인터 변수 표시

	addr = &a; // 변수 a의 주소를 받아옴
	val = *addr; // 포인터 변수가 가리키는 주소의 실제 값을 가져옴

	printf("a = 35일 때 \n");
	printf("1.변수 a의 주소 : %d\n", addr);
	printf("2.변수 a의 주소(16진수) : %X\n", addr);
	printf("3.포인터 변수 *addr에 저장된 값 : %d\n", val);
	return 0;
}