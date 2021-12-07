#include <stdio.h>

struct student { // 구조체 선언
	int sno;
	char name[10];
	int age;
};

int chk(struct student* p1, struct student* p2); // 사용자 정의 함수 원형

int main(void)
{
	int result;
	struct student a = { 20231234, "홍길동", 23 };
	struct student b = { 20203567, "김가을", 20 };

	result = chk(&a, &b); // 구조체 멤버 변수가 가리키는 주소로 함수 호출

	if (result == 1)
		printf("학생 a와 학생 b는 동일한 학생입니다. \n");
	else
		printf("학생 a와 학생 b는 서로 다른 학생입니다. \n");

	return 0;
}

int chk(struct student* s1, struct student* s2) // 사용자 정의 함수 정의
{
	if (s1->sno == s2->sno)
		return 1;
	else
		return 0;
}