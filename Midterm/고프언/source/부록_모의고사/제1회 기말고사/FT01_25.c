#include <stdio.h>
#include <stdlib.h>

#define SR 2      // 2���� ī��Ʈ ��ȣ ���
#define SC 3      // 3�� ǰ�� ī��Ʈ ��ȣ ��� 
#define DR 3      // 3�� ǰ�� �Է� ��ȣ ���
#define DC 9      // ���ڿ� �迭 ��� ó�� ��ȣ ���

int main(void)
{
	system("title ��1ȸ �⸻��� 25��");

	int score[SR][SC];                        // 2���� 3�� ǰ�� ó��
	char det[DR][DC] = { "CPU", "RAM", "HDD" };
	int row, col, sum = 0, total = 0;    

	for (row = 0; row < SR; row++)            // 2���� ������ ó�� �ݺ� ����
	{
		printf("\n >> %d�� ǰ�� ���� �Է� \n", row + 1);
		printf("---------------------------- \n");

		for (col = 0; col < DR; col++)        // 3�� ǰ�� ���� �Է� �ݺ� ����
		{
			printf(" >> %s : ", det[col]);
			scanf_s("%d", &score[row][col]);  // ǰ�� ���� �Է�
			sum += score[row][col];
		}
		printf(" >> �հ� ......... [ %d ] \n", sum);
		total += sum;                         // �� �Ǹ� ���� ���
		sum = 0;                              // ǰ�� �հ踦 ���� �ʱ�ȭ
	}
	printf("---------------------------- \n");
	printf(" >> ���Ǹż��� ... [ %d ] \n", total);
	return 0;
}