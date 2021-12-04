#include <stdio.h>
#include <string.h>

void bubble(char*, int); // 사용자 정의 함수 선언

int main(void)
{
	char str[80]; // 키보드로부터 문자열 입력받아 저장 

	printf("문자열 입력 : ");
	gets(str); // 직접형 입력 함수 사용
	bubble(str, strlen(str)); // 버블 정렬 사용자 정의 함수 호출 
	printf("문자열을 버블 정렬한 결과 : %s\n", str);
	return 0;
}

void bubble(char* item, int count) // 버블 정렬 사용자 정의 함수 정의
{
	int pass = 0; // 반복 수행할 카운터 변수 
	int change = 1; // 교체 여부
	int j; // item 포인터의 배열 첨자로 사용 
	char t; // 큰 값을 찾아 교체하기 위한 저장용 임시 변수

	printf(" \n[버블 정렬 함수 영역] \n\n");

	while (pass < count - 1 && change) // (n-1)회 pass 반복 수행
	{
		change = 0; // 교체 안 함
		for (j = 0; j < count - pass - 1; ++j)
		{
			if (item[j] > item[j + 1]) // 오름차순 정렬, 큰 값의 문자로 교체 
			{
				change = 1; // 교체
				t = item[j];
				item[j] = item[j + 1];
				item[j + 1] = t;
			}
		}
		pass++;
	}
}