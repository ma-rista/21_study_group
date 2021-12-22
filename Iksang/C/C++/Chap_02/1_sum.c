#include <stdio.h>
 
void arr_1(int len, int items[len]) {
    int num;
    printf("숫자 %d개 입력\n", len);
    for (int i = 0; i < len; i++) {
        printf(">>> ");
        scanf("%d", &num);
        items[i] = num;
    }
}
 
int sum(int len, int items[len]) {
    int sum = 0;
    for (int i = 0; i < len; i++) sum = sum + items[i];
    return sum;
}
 
int main() {
    int numbers[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    arr_1(10, numbers);
    printf("총합: %d\n", sum(5, numbers));
}