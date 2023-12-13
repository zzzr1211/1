#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int f5,f2,f1,c=0;
    for (int f1 = 1; f1 <=n/1; f1++)
    {
        for (int f2 = 1; f2 <=n/2; f2++)
        {
            for (int f5 = 1; f5 <=n/5; f5++)
            {
                if (f5*5+f1+f2*2==n)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n"
                    ,f5,f2,f1,f5+f2+f1);
                    c++;
                }
                
            }
            
        }
        
    }
    printf("count = %d",c);
}