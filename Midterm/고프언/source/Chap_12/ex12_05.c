#include <stdio.h>

int hap(int a, int b); // 사용자 정의 함수 hap( ) 선언
int cha(int a, int b); // 사용자 정의 함수 cha( ) 선언

int main(void)
{
	int result;
	int(*fp)(int, int); // 함수 포인터 정의

	printf("100과 200의 덧셈 연산과 뺄셈 연산 \n");

	fp = hap; // hap( ) 함수 주소를 포인터에 대입
	result = fp(100, 200); // 인수를 전달하여 hap( ) 함수 호출
	printf("덧셈 연산 결과 : %d\n", result);

	fp = cha; // cha( ) 함수 주소를 포인터에 대입
	result = fp(100, 200); // 인수를 전달하여 cha( ) 함수 호출 
	printf("뺄셈 연산 결과 : %d\n", result);
	return 0;
}

int hap(int a, int b)
{
	int sum;

	printf("\n[hap( ) 함수 영역]\n\n");
	sum = a + b;
	return sum;
}

int cha(int a, int b)
{
	int sub;

	printf("\n[cha( ) 함수 영역]\n\n");
	sub = a - b;
	return sub;
}