#include <stdio.h>

void Pr_ch(char ch, int num);     // ����� ���� �Լ� ����

int main(void)
{
	char input, choice;
	int n;

	do {
		printf("\n >> �Է� ���� : S 5 (���ĺ� [����] ���� �Է�)\n");
		printf(" >> ���ڿ� Ƚ��(����)�� �Է� : ");

		scanf_s("%c %d", &input, sizeof(input), &n);
		Pr_ch(input, n);              // �Լ� ȣ�� �� input�� n�� �Ű������� ����
		getchar();

	re:
		printf("\n >> ���α׷� �ٽ� ����?(Y/N) : ");
		scanf_s("%c", &choice);
		getchar();

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
		{
			printf(" >> ���α׷��� �����մϴ�. \n");
			return 0;
		}
		else
		{
			printf(" >> �����Է� ���� !! \n");
			goto re;
			getchar();
		}
	} while (1);
}

void Pr_ch(char ch, int num)   // �Լ� ����
{
	int cnt;                   // ī��Ʈ ����

	printf(" >> ");

	for (cnt = 1; cnt <= num; cnt++)
		printf(" %c ", ch);

	printf(" ..... [ %dȸ ��� �Ϸ� ] \n", cnt - 1);
}