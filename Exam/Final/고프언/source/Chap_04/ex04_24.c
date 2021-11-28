#include <stdio.h>
#define US 1129.50 // 1달러에 대한 한화 금액

int main(void)
{
	const float FEES = 0.0175; // 달러 현찰 구입시 수수료율
	int chsh; // 현금액 입력 변수 선언
	float dollar = 0, fees_chsh; // 달러 환율과 수수료 금액 변수 선언

	printf("달러 환율 US = 1129.50\n");
	printf("달러 구매 수수료율 FEES = 0.0175\n");

	printf("환전할 금액(한화) : ");
	scanf_s("%d", &chsh);
	dollar = chsh / US; // 달러를 원화로 환전 계산식
	fees_chsh = chsh * FEES; // 환전 수수료 계산식

	printf("환전 후 달러 금액 : $ %.2f\n", dollar);
	printf("환전 수수료 : ￦ %.2f\n", fees_chsh);
	return 0;
}