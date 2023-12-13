#include <stdio.h>
int main ()
{
    int a,n,b,i;
    scanf("%d%d",&a,&n);
    for (i = 1; i <=n; i++)
    {
        scanf("%d",&b);
        if (b<0)
        {
            i=-1;
            break;
        }else if (b<a)
        {
            printf("Too small\n");
        }else if (b>a)
        {
            printf("Too big\n");
        }else break;
  
    }

    if (i>3&&i<=n&&n>3)
    {
        printf("Good Guess!");
    }else if (i>1&&i<=3)
    {
        printf("Lucky You!");
    }else if (i==1)
    {
        printf("Bingo!");
    }else printf("Game Over");
    
    
    
    
}