#include <stdio.h>

int main(void)
{
	int data;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "rb");  // 읽기 모드로 바이너리 파일 열기

	if (NULL != fb)                          // 파일 열기를 성공한 경우
	{
		printf(" 바이너리 파일 열기 성공 \n");

		fread(&data, sizeof(int), 1, fb);
		fclose(fb);
		printf(" 읽어온 데이터 : %d(0x%04x)\n", data, data);
	}
	else                                     // 파일 열기를 실패한 경우
		printf(" 바이너리 파일 열기 실패 \n");

	return 0;
}