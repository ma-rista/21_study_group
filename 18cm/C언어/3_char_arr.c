#include <stdio.h>

int main(void)
{
    char *nm;
    char Name[10] = {0};
    char *ph;
    char Phone[11] = {0};
    char *Ad;
    char Add[10] = {0};
    char *I;
    char ID[10] = {0};
    nm = Name;
    ph = Phone;
    Ad = Add;
    I = ID;
    // 이름 입력
    printf("Name 입력 : _________ \b\b\b\b\b\b\b\b\b");
    scanf("%s", Name, sizeof(Name));
    for(int cnt = 0; cnt < 10; cnt++)
    printf("%c", *(nm + cnt));
    
    // 엔터
    printf("\n");
    
    // 폰 입력
    printf("Phone 입력 : _________ \b\b\b\b\b\b\b\b\b");
    scanf("%s", Phone, sizeof(Phone));
    for(int cnt = 0; cnt < 11; cnt++)
    printf("%c", *(ph + cnt));
    
    // 엔터
    printf("\n");
    
    // 주소 입력
    printf("Address 입력 : _________ \b\b\b\b\b\b\b\b\b");
    scanf("%s", Add, sizeof(Add));
    for(int cnt = 0; cnt < 10; cnt++)
    printf("%c", *(Ad + cnt));
    
    // 엔터
    printf("\n");
    
    // ID 입력
    printf("ID 입력 : _________ \b\b\b\b\b\b\b\b\b");
    scanf("%s", ID, sizeof(ID));
    for(int cnt = 0; cnt < 10; cnt++)
    printf("%c", *(I + cnt));
    
    // 엔터
    printf("\n");

    return 0;
}