#include <stdio.h>

struct person {                                   // person 구조체 선언
	char name[10];
	char gender;
	int age;
};

int main(void)
{
	struct person p1 = { "최고봉", 'M', 19 };     // 구조체 변수 선언 및 초기화
	struct person p2 = { "이겨레", 'F', 21 };

	printf("%-10s\t%s\t%8s \n", "성명", "성별", "나이");
	printf("%-12s\t %c\t %5d \n", p1.name, p1.gender, p1.age);
	printf("%-12s\t %c\t %5d \n", p2.name, p2.gender, p2.age);

	return 0;
}