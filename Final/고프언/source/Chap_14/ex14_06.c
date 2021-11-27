#include <stdio.h>

struct date { // 구조체 date 선언
	int year;
	int month;
	int day;
};

struct student { // 구조체 student 선언
	int sno;
	char name[10];
	int age;
	struct date* sd; // 구조체 date를 가리키는 포인터 선언
};

int main(void)
{
	struct date d = { 2023, 03, 03 }; // 구조체 변수 선언과 초기화
	struct student s = { 20231234, "홍길동", 23 };

	s.sd = &d; // 구조체 변수 s의 포인터 sd에 구조체 d의 주소 대입

	printf("1.학번 : %d\n", s.sno);
	printf("2.성명 : %s\n", s.name);
	printf("3.나이 : %d\n", s.age);
	printf("4.입학 일자 : %d. %d. %d. \n", s.sd->year, s.sd->month, s.sd->day);
	return 0;
}