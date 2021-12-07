#include <stdio.h>
#include <stdlib.h>

#define SIZE 50           // 성명을 입력받을 크기 설정

typedef struct data {     // 새로운 DATA 타입 정의
	char name[SIZE];
	int sno;
}DATA;

typedef struct node {    // 새로운 NODE 타입 정의
	DATA data;
	struct NODE *link;
}NODE;

/*- 사용자 정의 함수 선언 -*/
NODE *insert_node(NODE *plist, NODE *pprev, DATA item);
void display_menu();
int get_selectde_menu();
DATA get_input();
void print_list(NODE* plist);
void destroy_nodes(NODE* plist);
void end_display();

int main(void)
{
	NODE *plist = NULL;
	int selected = 0;
	DATA d;

	while (selected != 3)
	{
		display_menu();
		selected = get_selectde_menu();           // 키보드 입력값에 대한 함수 호출

		switch (selected)
		{
		case 1:
			d = get_input();
			plist = insert_node(plist, NULL, d);  // 사용자 정의 함수 호출
			printf(" 학생 정보 입력 완료 \n\n");
			break;
		case 2:
			print_list(plist);                    // 사용자 정의 함수 호출
			printf(" 학생 정보 출력 완료 !! \n\n");
			break;
		case 3:
			destroy_nodes(plist);                // 사용자 정의 함수 호출
			end_display();                       // 사용자 정의 함수 호출
			break;
		}
	}
	return 0;
}

/*- 동적 메모리 할당과 노드 생성 사용자 함수 정의 -*/
NODE *insert_node(NODE *plist, NODE *pprev, DATA item)
{
	NODE *pnew = NULL;
	if (!(pnew = (NODE*)malloc(sizeof(NODE))))
	{
		printf("메모리 동적 할당 오류 발생 !! \n");
		exit(1);
	}

	pnew->data = item;
	if (pprev == NULL)
	{
		pnew->link = plist;
		plist = pnew;
	}
	else
	{
		pnew->link = pprev->link;
		pprev->link = pnew;
	}
	return plist;
}

/*- 화면에 보여주는 메뉴를 출력하는 사용자 정의 함수 -*/
void display_menu()
{
	printf(" 학생 정보 관리 메뉴 \n");
	printf(" 1.학생 정보 추가\n");
	printf(" 2.학생 정보 출력\n");
	printf(" 3.종료\n");
}

/*- 선택한 번호를 전달해 주는 사용자 정의 함수 -*/
int get_selectde_menu()
{
	int selmenu = 0;
	printf(" 번호 선택 : ");
	scanf_s("%d", &selmenu);
	getchar();
	return selmenu;
}

/*- 학생의 정보를 입력받는 사용자 정의 함수 -*/
DATA get_input()
{
	DATA input;
	printf("\n 학번 입력 : ");
	scanf_s("%d", &input.sno);
	getchar();
	printf(" 성명 입력 : ");
	gets_s(input.name, sizeof(input.name));
	return input;
}

/*- 입력한 학생의 정보를 출력하는 사용자 정의 함수 -*/
void print_list(NODE* plist)
{
	NODE *ptr;
	for (ptr = plist; ptr; ptr = ptr->link)
	{
		printf("\n 학번 : %d\n", ptr->data.sno);
		printf(" 성명 : %s\n", ptr->data.name);
	}
}

/*- 할당된 동적 메모리를 해제하는 사용자 정의 함수 -*/
void destroy_nodes(NODE *plist)
{
	NODE *temp;
	while (plist)
	{
		temp = plist;
		plist = plist->link;
		free(temp);
	}
}

/*- 프로그램 종료 메시지 출력 사용자 정의 함수 -*/
void end_display()
{
	printf(" 프로그램 종료 \n");
}