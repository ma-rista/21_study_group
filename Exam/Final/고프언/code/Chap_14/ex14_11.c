#include <stdio.h>

union mem { // 공용체 mem 선언
	unsigned long sno;
	char name[10];
	int age;
};

int main(void)
{
	union mem udata; // 공용체 mem의 변수 udata 선언

	printf("udata.sno의 크기는 %d\n", sizeof(udata.sno));
	printf("udata.name의 크기는 %d\n", sizeof(udata.name));
	printf("udata.age의 크기는 %d\n", sizeof(udata.age));

	printf(" \nudata.sno의 주소는 %d\n", &udata.sno);
	printf("udata.name의 주소는 %d\n", &udata.name);
	printf("udata.age의 주소는 %d\n", &udata.age);
	return 0;
}