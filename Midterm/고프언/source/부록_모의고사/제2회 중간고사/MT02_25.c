#include <stdio.h>

int Call_ref(int* su);     // ����� ���� �Լ� ����

int main(void)
{
	int num, result;

	printf(" >> ���� �Է� : ");
	scanf_s("%d", &num);

	printf(" >> �Լ� ȣ���ϱ� ���� �� ... [ %5d ] \n", num);

	result = Call_ref(&num);     // �ּҿ� ���� ȣ��

	printf(" >> �Լ� ȣ�� ���� �� ....... [ %5d ] \n", result);
	return 0;
}

int Call_ref(int *su)          // �Լ� ����
{
	*su = *su * *su;           // �ּҿ� ����� ���� ���� ����
	return *su;
}