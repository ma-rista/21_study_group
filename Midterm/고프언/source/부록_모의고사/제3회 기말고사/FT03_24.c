#include <stdio.h>

struct person {                                   // person ����ü ����
	char name[10];
	char gender;
	int age;
};

int main(void)
{
	struct person p1 = { "�ְ��", 'M', 19 };     // ����ü ���� ���� �� �ʱ�ȭ
	struct person p2 = { "�̰ܷ�", 'F', 21 };

	printf("%-10s\t%s\t%8s \n", "����", "����", "����");
	printf("%-12s\t %c\t %5d \n", p1.name, p1.gender, p1.age);
	printf("%-12s\t %c\t %5d \n", p2.name, p2.gender, p2.age);

	return 0;
}