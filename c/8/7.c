#include <stdio.h>
int main()
{
    int N,X,a;
    int MAX=20;
    int number[MAX];
    a=0;

    scanf("%d %d",&N,&X);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&number[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (number[i]==X)
        {
            a=i;
        }
    }
    if (a!=0)
    {
        printf("%d",a);
    }else{
        printf("Not Found");
    }
    
    return 0;
    
}