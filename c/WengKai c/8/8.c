#include <stdio.h>

int main()
{
    int N;
    int MAX=1000;
    int a[MAX];
    int b[10]={0};
    int x=-1;
    int y=0;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        while (a[i]>1)
        {
            x=a[i]%10;
            b[x]+=1;
            a[i]/=10;
        }
        
    }
    
    for ( int i = 0; i < 10; i++)
    {
        if (b[i]>y)
        {
            y=b[i];
        }
   }
   printf("%d:",y);
   for ( int i = 0; i < 10; i++)
   {
    if (b[i]==y)
    {
        printf(" %d",i);
    }
    
   }
   
    return 0;
}