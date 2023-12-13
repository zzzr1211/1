#include <stdio.h>
int main ()
{
    int m,n,count[10]={0},temp;
    scanf("%d%d",&m,&n);

    for (int i = m; i < n+1; i++)
    {
        temp=i;
        while (temp>0)
        {
            count[temp%10]++;
            temp/=10;
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",count[i]);
    }
    
}