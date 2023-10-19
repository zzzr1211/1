#include <stdio.h>

void PrintN ( int N );

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}

void PrintN ( int N )
{
    for (int i = 1; i < N+1; i++)
    {
        printf("%d\n",i);
    }
    

}
