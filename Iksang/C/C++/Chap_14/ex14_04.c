#include <stdio.h>

struct person { // 구조체 person 선언
	char name[10]; // 구조체 멤버 선언
	char gender;
	int age;
};

int main(void)
{
	struct person mc[3] = { // 각 배열 요소는 { }로 구분
	{"홍길동", 'M', 23},
	{"김가을", 'W', 20},
	{"이겨레", 'M', 25}
	};
	int cnt; // 카운트 변수

	printf("%6s \t %6s %8s %6s\n", "순서", "성명", "성별", "나이");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%4d\t", cnt + 1);
		printf("%8s %6c %6d\n", mc[cnt].name, mc[cnt].gender, mc[cnt].age);
	}
	return 0;
}