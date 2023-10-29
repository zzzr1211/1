#include <stdio.h>
int main ()
{
    int A,B;
    scanf("%d%d",&A,&B);
    int sum=0;
    int n=0;

    for (int i = A; i <=B; i++)
    {
        printf("%5d",i);
        n+=1;
        sum+=i;
        if (n%5==0||i==B)
        {
            printf("\n");
        }
        
    }
    
    printf("Sum = %d",sum);

    return 0;
}