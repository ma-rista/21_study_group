#include <stdio.h>
#include <stdlib.h>    // malloc( ) �Լ��� free( ) �Լ� ���� ����

#define MAX 3

int main(void)
{
	int cnt, sum = 0;
	char yn;
	float avg;
	int *score;  // �����͸� �����Ͽ� ���� �޸��� �ּҷ� ���

	score = (int*)malloc(sizeof(int)*MAX);  // ���� �޸� �Ҵ�

	if (score == NULL)
	{
		printf(" >> ���� �޸� �Ҵ� ���� �߻� !! \n");
		exit(1);     // ���α׷� ����(��ȣ ���� 1�� ������ ���Ḧ �ǹ�)
	}

	/*-- ���� �޸� ��� --*/
	do {
		for (cnt = 0; cnt < MAX; cnt++)
		{
			printf(" >> ���� %d ���� : ", cnt + 1);
			scanf_s("%d", &score[cnt]);
			sum += score[cnt];
		}
		avg = (float)sum / MAX;

		getchar();      // [Enter] Ŷ�� ����
		printf(" >> ���� ..... %5d \n", sum);
		printf(" >> ��� ..... %.2f \n", avg);

	re:
		printf("\n >> ���α׷� �ٽ� ����?(Y/N) : ");
		scanf_s("%c", &yn);
		getchar();     // [Enter] Ŷ�� ����

		if (yn == 'Y' || yn == 'y')
		{
			sum = 0;            // �ݺ� �����ϱ� ���� �ʱ�ȭ
			continue;
		}
		else if (yn == 'N' || yn == 'n')
		{
			printf(" >> ���α׷��� �����մϴ�. \n");
			free(score);    // ���� �޸� �ݳ�
			return 0;
		}
		else
		{
			printf(" >> ���� �Է� ���� !! \n");
			goto re;
		}
	} while (1);
}