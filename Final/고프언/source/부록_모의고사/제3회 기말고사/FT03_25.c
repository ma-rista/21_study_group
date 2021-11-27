#include <stdio.h>
#include <string.h>

#define MAX 80                     // ���ڿ� �ִ� �Է� ��
int sequential(char*, int, char);  // ����� ���� �Լ� ����

int main(void)
{
	char str[MAX];                   // Ű����� ���� ���ڿ� �Է¹��� �迭 ����
	char key = 'Q';
	char yn;
	int check;

	do {
		printf(" >> ���ڿ� �Է� : ");
		gets_s(str, sizeof(str));                   // Ű����κ��� ���ڿ��� �Է¹޾� ����

		check = sequential(str, strlen(str), key);  // �μ� 3���� �����Ͽ� ȣ��

		if (check < 0)
			printf(" >> �Է��� ���ڿ����� ���ĺ� �빮�� \"Q\"�� �����ϴ�.\n");
		else
		{
			printf(" >> ���ĺ� �빮�� \"Q\"�� ã�ҽ��ϴ� !!!  \n");
			printf(" >> ���ڿ��� [ %d ]��°�� �ֽ��ϴ�.\n", check + 1);
		}

	re:
		printf("\n >> ���α׷� �ٽ� ����?(Y/N) : ");
		scanf_s("%c", &yn);
		getchar();

		if (yn == 'Y' || yn == 'y')
			continue;
		else if (yn == 'N' || yn == 'n')
		{
			printf(" >> ���α׷��� �����մϴ�. \n");
			return 0;
		}
		else
		{
			printf(" >> ���� �Է� ���� !! \n");
			goto re;
		}
	} while (1);
}

int sequential(char* item, int count, char key)   // ���� Ž���� �����ϴ� ����� �Լ� ����
{
	int i;

	printf("\n  <<<<< ���� Ž�� �Լ� ���� >>>>>  \n\n");

	for (i = 0; i < count; ++i)        // ã���� �ϴ� ���ĺ��� ���� Ž���� �ݺ� ����

		if (key == item[i])            // ��ġ�� ���
			return i;

	return -1;  // ��ġ���� ���� ��� 
}