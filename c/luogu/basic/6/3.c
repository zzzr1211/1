#include <stdio.h>
int isLeapyear(int x);
int main ()
{
    int begin,end,count=0,space=0,a[1001];
    scanf("%d%d",&begin,&end);

    for (int i = begin; i <=end; i++)
    {
        if (isLeapyear(i))a[count++]=i;
        
    }
    printf("%d\n",count);
    for (int i = 0; i < count; i++)
    {
        if (space++)printf(" ");
        printf("%d",a[i]);
    }
    
    return 0;
}
int isLeapyear(int x)
{
    int res=0;
    if (x%4==0&&x%100!=0||x%400==0)
    {
        res=1;
    }
    return res;
}