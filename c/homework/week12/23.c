#include <stdio.h>
int main ()
{
    int n,a,res=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        res+=a;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        res-=a;
    }
    if (res==0)
    {
        printf("sad");
    }else if (res>0)
    {
        printf("cat");
    }else printf("pig");
    
    
}