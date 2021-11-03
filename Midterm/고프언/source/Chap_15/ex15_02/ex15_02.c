#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	FILE *fp;
	errno_t err;

	err = fopen_s(&fp, "data.txt", "rt");  // 읽기 모드로 텍스트 파일 열기

	if (NULL != fp)                        // 파일 열기를 성공한 경우
	{
		printf(" 파일 열기 성공 \n");

		fscanf_s(fp, "%d %d %d", &n1, &n2, &n3);
		printf(" %d %d %d \n", n1, n2, n3);

		fclose(fp);
	}
	else                                  // 파일 열기를 실패한 경우
		printf(" 파일 열기 실패 \n");

	return 0;
}