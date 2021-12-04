#include <stdio.h>

int main(void)
{
	char good[80];
	FILE *fp;
	errno_t err;

	err = fopen_s(&fp, "insa.txt", "rt");  // 읽기 모드로 텍스트 파일 열기

	if (NULL != fp)                        // 파일 열기를 성공한 경우
	{
		printf(" 파일 열기 성공 \n");

		while (NULL != fgets(good, sizeof(good), fp))
		{
			printf(" %s", good);          // 텍스트 문자열에 줄 바꿈(Enter) 적용되므로 \n은 생략
		}
		fclose(fp);
	}
	else                                  // 파일 열기를 실패한 경우
		printf(" 파일 열기 실패 \n");

	return 0;
}