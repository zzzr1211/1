#include <stdio.h>
int main()
{
    int n,a[51][51]={0},count=1;
    scanf("%d",&n);
    for (int i = n; i>=1; i--)
    {
       if ((n-i)%2==0)
       {
        for (int j = 1; j <=n; j++)
        {
            a[i][j]=count++;
        }
        
       }else{
        for (int j = n; j >=1; j--)
        {
            a[i][j]=count++;
        }
        
       }
       
        
    }
    
    for (int i = 1; i <=n; i++)
    {
        printf("%d",a[i][1]);
        for (int j = 2; j <=n; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    
}