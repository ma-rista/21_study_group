#include <stdio.h>

struct show { // 구조체 show 선언
	char name[10]; // 구조체 멤버 선언
	int su;
	int price;
};

int main(void)
{
	struct show t = { "스마트폰", 3, 960 }; // 구조체 변수 선언과 초기화
	struct show* p; // 구조체 포인터 변수 선언 

	p = &t; // 구조체 변수 t의 주소를 구조체 포인터 변수에 대입

	printf("1.구조체 변수 t를 사용하여 출력 \n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d \n", t.name, t.su, t.price);

	printf(" \n2.구조체 포인터 변수 *p를 사용하여 출력 \n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d\n", (*p).name, (*p).su, (*p).price);

	printf(" \n3.구조체 간접 멤버 연산자 \'-> \'를 사용하여 출력 \n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d\n", p->name, p->su, p->price);
	return 0;
}