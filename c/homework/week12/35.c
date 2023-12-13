#include <stdio.h>
int main ()
{
    int n,dm,db,count=1,space=0;
    double arr[1001]={0},min=1000000000.0,a,b;
    scanf("%d",&n);
    scanf("%lf%lf",&a,&b);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d%d",&db,&dm);
        arr[i]=db*a+dm*b;
        if (arr[i]<min)
        {
            min=arr[i];
            count=1;
        }else if (arr[i]==min)
        {
            count++;
        }
    }
    printf("%d\n",count);
    for (int i = 1; i <=n; i++)
    {
        if (arr[i]==min)
        {
            if (space==1)
            {
                printf(" ");
            }
            
            printf("%d",i);
            space=1;
        }
        
    }
    

}