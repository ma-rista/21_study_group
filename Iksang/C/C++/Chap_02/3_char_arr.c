#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    

struct Person {   
    char name[20];        
    int Phone;             
    char Address[100];   
	int ID; 
};

int main()
{
	struct Person p1;
	printf("이름 입력 : ");
	scanf("%s", p1.name);
	printf("번호 입력 : ");
	scanf("%d", &p1.Phone);
	printf("주소 입력 : ");
	scanf("%d", &p1.Address);
	printf("ID 입력 : ");
	scanf("%d", &p1.ID);


	printf("이름은 %s, 번호는 %d, 주소는 %d, ID는 %d 입니다.\n", p1.name, p1.Phone, p1.Address, p1.ID);

	return 0;
}