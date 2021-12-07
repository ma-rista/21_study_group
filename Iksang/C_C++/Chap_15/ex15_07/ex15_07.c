#include <stdio.h>

int main(void)
{
	int su = 0x00000352;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "wb");  // 쓰기 모드로 바이너리 파일 열기

	if (NULL != fb)                          // 파일 열기를 성공한 경우
	{
		printf(" 바이너리 파일 열기 성공 \n");

		fwrite(&su, sizeof(int), 1, fb);
		fclose(fb);
	}
	else                                     // 파일 열기를 실패한 경우
		printf(" 바이너리 파일 열기 실패 \n");

	return 0;
}