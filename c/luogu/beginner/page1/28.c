#include <stdio.h>
#include <math.h>
int main ()
{
    int n,a[10000]={2},res,count=0,sum,temp;
    scanf("%d",&n);
    if(n<2) return 0;
    for (int i = 3; i <=n; i++)
    {
        res=0;
        for(int j=2;j<=sqrt(i);j++)if(i%j==0){res=1;break;}
        if(res==0) a[++count]=i;
    }
    
    for (int i = 0; i <=count; i++)
    {
        sum=0;
        temp=n;
        while (temp)
        {
            temp/=a[i];
            sum+=temp;
        }
        
        printf("%d %d\n",a[i],sum);
    }
    
}