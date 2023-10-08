#include <stdio.h>

int A(int);

int main()
{
    int M,N,a,b,exit;
    a=0;
    b=0;
    exit=0;
    scanf("%d %d",&M,&N);

    for (int i = 2; ; i++)
    {
        if (A(i)==0)
        {
            a++;
            if (a>=M&&a<N)
            {
                printf("%d",i);
                b++;
                if (b%10==0)
                {
                    printf("\n");
                }else{
                    printf(" ");
                }
            }else if (a==N)
            {
                printf("%d",i);
                exit=1;
            }
            
            
        }
        if (exit==1)
        {
            break;
        }
        
    }
    return 0;

}

int A(int a)
{
    int b=0;
    int c=0;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            b++;
        }
        
    }
    if (b!=0)
    {
        c=1;
    }
    
    return c;

}