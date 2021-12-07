#include <stdio.h>
struct first {
int a;
int b;
 };
 struct second {
	 struct first sa;
	 struct first sb;
 };
 void main()
 {
	 struct second after2;

	 after2.sa.a = 10;
	 after2.sa.b = 20;
	 after2.sb.a = 30;
	 after2.sb.b = 40;

	 printf("중첩된 second 구조체 변수 after2 출력 \n");
	 printf("after2.sa.a의 값은 %d\n", after2.sa.a);
	 printf("after2.sa.b의 값은 %d\n", after2.sa.b);
	 printf("after2.sb.a의 값은 %d\n", after2.sb.a);
	 printf("after2.sb.b의 값은 %d\n", after2.sb.b);
 }