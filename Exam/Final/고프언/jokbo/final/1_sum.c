
#include <stdio.h>


int main(void)
{
    int i;
    int arr_1[10];
    int sum = 0;
    int *pa_1 = arr_1;

    for (i = 10; i < 20; i++)
    {
        arr_1[i-10] = i;
    }
    for (int i = 0; i < sizeof(arr_1)/sizeof(int); i++)
    {
        printf("%d\n", arr_1[i]);
    }

    for (i = 0; i < 11; i++)
    {
        sum += *pa_1++;
    }
    

    printf("\n전체 배열의 합은 %d입니다.", sum - 10);

    return 0;
}




