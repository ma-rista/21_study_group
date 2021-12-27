#include <stdio.h>
#include <stdlib.h>

typedef struct P_Info {
	char ID[30];
    char Name[10];
    int phoneNumber;       
} ST;

int main(void)
{
	ST* t_zone;       // 동적 메모리 공간을 가리키는 포인터
	int max, cnt, sum = 0;

	printf("몇개의 ID를 입력하시겠습니까 : ");
	scanf("%d", &max);

	if (max < 0)
	{
		printf(" 음의 정수는 허용하지 않습니다. \n");
		exit(1);
	}

	getchar();                              
	t_zone = (ST*)malloc(sizeof(ST) * max);   

	if (t_zone == NULL)
	{
		printf(" >> 동적 메모리 할당 오류 발생 !! ");
		exit(1);
	}

	for (cnt = 0; cnt < max; cnt++)
	{
		printf(" ID를 입력하세요 : ");
        scanf("%s", &(t_zone[cnt].ID));
		
        printf(" 이름(영어)을 입력하세요 : ");
        scanf("%s", &(t_zone[cnt].Name));

        printf(" 전화번호를 입력하세요 : ");
		scanf("%d", &(t_zone[cnt].phoneNumber));

		getchar();     
	}
	
	for (cnt = 0; cnt < max; cnt++)
		printf(" %s \t\t %s \t\t %3d \n", t_zone[cnt].ID,t_zone[cnt].Name, t_zone[cnt].phoneNumber);

	free(t_zone);  
}
