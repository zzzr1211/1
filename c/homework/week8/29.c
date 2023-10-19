#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    int t1,t2;
    t1=15+5*n;
    t2=7*n;

    if (t1<t2)
    {
        printf("%d",t1);
    }else {
        printf("%d",t2);
    }

    return 0;
    
}