#include <stdio.h>

int main(void)
{
	int a = 300; // 정수형 변수의 선언과 초기화
	int* pa = NULL; // 포인터를 초기화하지 않을 경우 가비지값 발생 우려
	// NULL의 주소값은 stdio.h 헤더 파일에서 0번지로 지정
	pa = &a; // 포인터에 일반 변수 a의 주소값을 대입하여 초기화
	char yn;

	do
	{
		printf(" \n 주소값 출력 \n");
		printf("1.포인터 pa의 주소값 : %u\n", pa);
		printf("2.일반 변수 a의 주소값 : %u\n", &a);

		printf(" \n데이터값 출력 \n");
		printf("1.*pa의 데이터값 : %u\n", *pa);
		printf("2.일반 변수 a의 데이터값 : %u\n", a);

	re_play:
		printf("프로그램을 다시 시작하겠습니까?(Y/N) : ");
		scanf_s(" %c", &yn, sizeof(yn));

		switch (yn)
		{
		case 'Y': case 'y':
			continue;
			break;

		case 'N': case 'n':
			printf("프로그램을 종료합니다. \n");
			return 0;

		default:
			printf(" \n%c는(은) 허용하지 않는 알파벳입니다! \n", yn);
			printf("알파벳을 다시 입력하세요. \n");
			goto re_play;
			break;
		}
	} while (1);
}