#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Sum ( int List[], int N )
{
    int res=0;
    for (int i = 0; i < N; i++)
    {
        res+=List[i];
    }
    return res;


}