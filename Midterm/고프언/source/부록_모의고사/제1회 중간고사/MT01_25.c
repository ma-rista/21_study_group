#include <stdio.h>

int main(void)
{
	int a, b, c, min;
	char choice;

	do {
		printf(" >> 3���� ���� �Է�(�����ڴ� �޸� ���) : ");
		scanf_s("%d,%d,%d", &a, &b, &c);

		min = (a < b) ? a : b;
		min = (min < c) ? min : c;

		printf("\n >> Ű����� �Է��� 3���� ������ %d, %d, %d �̸� \n", a, b, c);
		printf(" >> �� �߿��� �ּҰ��� ....... [ %d ] \n", min);
		getchar();

	re:
		printf("\n >> ���α׷� �ٽ� ����?(Y/N) : ");
		scanf_s("%c", &choice);

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
			break;
		else
		{
			getchar();
			printf(" >> �Է� ���� ���� !! \n");
			goto re;
		}
	} while (1);
	printf("\n >> ���α׷��� �����մϴ�. \n");
	return 0;
}