#include <stdio.h>
int main ()
{
    int s1,s2,s3,a[10000]={0};
    scanf("%d%d%d",&s1,&s2,&s3);

    for (int i = 1; i <=s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                a[i+j+k]++;
            }
            
        }
        
    }
    int max=0,count=0;
    for (int i = 3; i < 10000; i++)
    {
        if (a[i]>count)
        {
            max=i;
            count=a[i];           
        }if (a[i]==0)
        {
            break;
        }
        
        
    }
    
    printf("%d",max);
}