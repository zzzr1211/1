#include <stdio.h>
int permutation(int n);
int main ()
{
    int n,a[10],nob=1;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%1d",&a[i]);
    }
    for (int i = 1; i <n; i++)
    {
        int m=0;
        for (int j = 1; j <=n; j++)
        {
            if(a[i]>a[j])m++;
        }
        nob+=m*permutation(n-i);
        a[i]=10;
    }
    printf("%d",nob);
}
int permutation(int n)
{
    if (n==1)
    {
        return 1;
    }  else return n*permutation(n-1);
}