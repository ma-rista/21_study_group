#include <stdio.h>

struct first { // first 구조체 선언
	int a; // 구조체 멤버 선언
	int b;
};

struct second { // first 구조체를 멤버로 포함하는 second 구조체 선언
	struct first sa;
	struct first sb;
};

int main(void)
{
	struct second ns; // second 구조체 변수 정의

	ns.sa.a = 10;
	ns.sa.b = 20;
	ns.sb.a = 30;
	ns.sb.b = 40;

	printf("1.ns.sa.a의 값은 %d\n", ns.sa.a);
	printf("2.ns.sa.b의 값은 %d\n", ns.sa.b);
	printf("3.ns.sb.a의 값은 %d\n", ns.sb.a);
	printf("4.ns.sb.b의 값은 %d\n", ns.sb.b);
	return 0;
}