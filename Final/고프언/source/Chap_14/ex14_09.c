#include <stdio.h>

struct student { // 구조체 선언
	int sno;
	char name[10];
	int age;
};

struct student becoming(); // 사용자 정의 함수

int main(void)
{
	struct student a;

	a = becoming(); // 구조체 함수 호출

	printf("학번 : %d\n", a.sno);
	printf("성명 : %s\n", a.name);
	printf("나이 : %d\n", a.age);
	return 0;
}

struct student becoming() // 사용자 정의 함수 정의
{
	struct student s;
	s.sno = 20235678;
	strcpy(s.name, "이겨레");
	s.age = 25;
	return s; // 구조체를 반환값으로 전달
}