#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if (a<2000||a>2100)
    {
        printf("Invalid year!");
    }else if (a<=2003)
    {
        printf("None");
    }else{
        for (int i = 2001; i <=a; i++)
        {
            if ((i%4==0&&i%100!=0)||i%400==0)
            {
                printf("%d\n",i);
            }
            
        }
        
    }
    return 0;
    
    
}