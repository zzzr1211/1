#include <stdio.h>
#include <string.h>
int main ()
{
    int n,a[101]={0},x,y;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    while (x!=0||y!=0)
    {
        a[x]+=y;
        scanf("%d %d",&x,&y);
    }
    
    for (int i = 1; i <=n; i++)
    {
        printf("%d %d\n",i,a[i]);
    }
    
}