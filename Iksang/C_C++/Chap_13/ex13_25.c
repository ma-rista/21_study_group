#include <stdio.h>
#include <string.h>

int main(void)
{
	while (1)
	{
		int cnt, index = 0;
		int result; // 문자열 비교값을 저장하기 위한 변수
		char word[30]; // 키보드로 입력하기 위한 문자형 배열

		// 5는 ID 개수, 2는 0이면 ID, 1이면 PASSWORD, 20은 글자수
		char member[5][2][20] = {
		{"space", "123456"},
		{"web2me", "000000"},
		{"power", "555555"},
		{"quen33", "888888"},
		{"zzang", "111111"}
		};

		printf("ID 입력 : ");
		scanf_s("%s", word, 30);

		for (cnt = 0; cnt < 5; cnt++)
		{
			result = strcmp(member[index][0], word);// 입력한 문자열과 비교

			if (result == 0) // 주어진 문자열과 입력한 문자열이 같을 경우
			{
				printf("ID [%s]의 ", word);
				printf("PASSWORD는 %s입니다. \n", member[index][1]);
				return 0;
			}
			index++;
		}
		printf("입력한 ID %s은(는) 찾을 수 없습니다. \n", word);
		printf("ID를 다시 입력하세요. \n");
	}
}