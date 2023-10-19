#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Median( ElementType A[], int N )
{
    for (int i = 0; i < N-1; i++)
    {
        int count = 0;
        for (int j = 0; j < N-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                ElementType a;
                a=A[j+1];
                A[j+1]=A[j];
                A[j]=a;
                count=1;
            }
            
        }
        if (count == 0)	
				break;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%.1f ",A[i]);
    // }
    // printf("\n");
    ElementType ret;
    if (N%2!=0)
    {
        ret=A[(N + 1) / 2 - 1];
    }else ret=A[N / 2];

    return ret;
    
}