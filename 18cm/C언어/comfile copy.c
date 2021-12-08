#include <stdio.h>

int main(void)
{
    int arr_1[10] = {
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
    };
    int *pa_1 = arr_1;
    int i, sum = 0;
    for(i = 0; i<10; i++) sum += *pa_1;
    printf("%d", sum);
    
}

// #include <stdio.h>


// int main(void) 
// {
//     int N;
//     int max=-1000000, min=1000000;
//     scanf("%d", &N);
//     int A[N];
//     for(int i=0;i<N;i++)
//     {
//         scanf("%d", &A[i]);
//         if(A[i]>max) max = A[i];
//         if(A[i]<min) min = A[i];
//     }
//     printf("%d %d\n", min, max);
//     return 0;
// }



