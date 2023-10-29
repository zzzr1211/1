#include <stdio.h>

int main ()
{
    int a;
    int n=0;
    scanf("%d",&a);
    for (int i = a; i < a+4; i++)
    {
        for (int j = a; j < a+4; j++)
        {
            for (int k = a; k < a+4; k++)
            {
                if (i!=j&&i!=k&&j!=k)
                {
                    printf("%d%d%d",i,j,k);
                    n+=1;
                    if (n%6==0)
                    {
                        printf("\n");
                    }else printf(" ");
                    
                }
                
            }
            
        }
        
    }
    
}