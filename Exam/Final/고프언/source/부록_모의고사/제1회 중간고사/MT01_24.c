#include <stdio.h>

int main(void)
{
	char dept[20];
	char name[10];

	printf(" >> 학과 : ");
	scanf_s("%s", dept, sizeof(dept));

	printf(" >> 성명 : ");
	scanf_s("%s", name, sizeof(name));

	printf("\n >> 입력한 정보 출력 \n");
	printf(" >> 학과 : [ %s ] \n", dept);
	printf(" >> 성명 : [ %s ] \n", name);

	return 0;
}