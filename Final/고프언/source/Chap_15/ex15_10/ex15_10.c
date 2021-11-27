#include <stdio.h>

int main(void)
{
	int f_size;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "rb");  // 읽기 모드로 바이너리 파일 열기

	if (NULL != fb)                          // 파일 열기를 성공한 경우
	{
		printf(" 바이너리 파일 열기 성공 \n");

		fseek(fb, 0, SEEK_END);              // 파일의 끝으로 이동
		f_size = ftell(fb);                  // 파일의 현재 위치까지 파일의 크기를 구함   
		printf(" 파일 크기 : %d바이트 \n", f_size);

		fclose(fb);
	}
	else                                    // 파일 열기를 실패한 경우
		printf(" 바이너리 파일 열기 실패 \n");

	return 0;
}