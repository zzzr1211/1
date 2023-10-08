#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,k,p;
    p=0;
    
    for ( i=a; i < a+4; i++)
    {
        for (j=a; j < a+4; j++)
        {
            for ( k = a; k < a+4; k++)
            {
                if (i!=j&& i!=k&& j!=k)
                {
                    printf("%d%d%d",i,j,k);
                    p++;
                }

                if (p%6==0)
                {
                    printf("\n");
                }else{
                    printf("  ");
                    }
                
                
            }
            
        }
        
    }
    
    
    return 0;
}