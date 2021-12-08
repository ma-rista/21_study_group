#include <stdio.h>

int main(void)
{
    int arr_1[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for(int i = 0; i < 10; i++)
    printf("배열 값%d\n%d\n", i + 1, arr_1[i]);
    int *pa_1 = arr_1;
    int i, sum = 0;
    pa_1 = arr_1;
    for(i = 0; i<10; i++){
        sum += *pa_1++;
    } 
    printf("총합 : %d", sum);
    return 0;
}


