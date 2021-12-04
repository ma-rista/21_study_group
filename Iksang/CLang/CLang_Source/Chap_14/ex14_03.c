#include <stdio.h>

struct person {
	char name[10];
	char gender;
	int age;
};

int main(void)
{
	struct person p1 = { "홍길동", 'M', 23 };
	struct person p2 = { "김가을", 'W', 20 };

	p2 = p1;

	printf("%8s %8s %8s\n", "성명", "성별", "나이");
	printf("%8s %6c %8d\n", p1.name, p1.gender, p1.age);
	printf("%8s %6c %8d\n", p2.name, p2.gender, p2.age);
	return 0;
}