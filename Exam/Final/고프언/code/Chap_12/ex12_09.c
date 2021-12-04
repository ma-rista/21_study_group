#include <stdio.h>

int main(void)
{
	int a = 100;
	char b = 'F';
	void* vp; // void형 포인터 변수 선언

	printf("1.캐스트 연산자를 사용하는 경우 \n");

	vp = &a;
	printf("변수 a의 값이 *(int*)vp로 출력 : %d\n", *(int*)vp);

	vp = &b;
	printf("변수 b의 값이 *(char*)vp로 출력 : %c\n", *(char*)vp);

	printf(" \n2.캐스트 연산자를 사용하지 않는 경우 \n");
	printf("변수 a의 값이 *vp로 출력 : Illegal Indirection 오류 \n");
	// printf("변수 a의 값이 *vp로 출력 : %d\n", *vp);

	printf("변수 b의 값이 *vp로 출력 : Illegal Indirection 오류 \n");
	// printf("변수 b의 값이 *vp로 출력 : %c\n", *vp);
	return 0;
}