#include <stdio.h>

int main(void)
{
	char dept[20];
	char name[10];

	printf(" >> �а� : ");
	scanf_s("%s", dept, sizeof(dept));

	printf(" >> ���� : ");
	scanf_s("%s", name, sizeof(name));

	printf("\n >> �Է��� ���� ��� \n");
	printf(" >> �а� : [ %s ] \n", dept);
	printf(" >> ���� : [ %s ] \n", name);

	return 0;
}