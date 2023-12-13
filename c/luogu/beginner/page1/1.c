#include <stdio.h>
int main ()
{
    int l,n,dir,t1,t2,min,max;
    scanf("%d%d",&l,&n);
    min=0;
    max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&dir);
        t1=dir;
        t2=l+1-dir;
        if (t1>t2)
        {
            t1=t1+t2;
            t2=t1-t2;
            t1=t1-t2;
        }
        if (t1>min)
        {
            min=t1;
        }
        if (t2>max)
        {
            max=t2;
        }
        
    }
    
    printf("%d %d",min,max);
}