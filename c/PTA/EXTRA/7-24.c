#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);

    int a[41]={1,1};
    for (int i = 2; i <=40; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    
    printf("%d",a[N-1]);
}