#include <stdio.h>

int main(void)
{
	char alpha[] = { 'A', 'B', 'C', 'D', 'E' };
	int count;

	count = sizeof(alpha) / sizeof(alpha[0]);  // �迭 ����� ���� ����

	printf(" >> char alpha[] = { \'A\', \'B\', \'C\', \'D\', \'E\' } \n");
	printf(" >> �迭�� ����� ���� ...  %d�� \n", count);

	return 0;
}