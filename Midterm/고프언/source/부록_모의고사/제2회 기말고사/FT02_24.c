#include <stdio.h>

int main(void)
{
	int cnt;
	char *dept[] = { "��ǻ��", "��Ʈ��", "���콺", "Ű����", "�����" };

	printf(" >> ���� ��� ���� \n");

	for (cnt = 0; cnt < 5; cnt++)
		printf("  %c ���� : [ %s ] \n", 65 + cnt, dept[cnt]);

	return 0;
}