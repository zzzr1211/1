#include <stdio.h>
int main ()
{
    int A[5];
    int res=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
    }
    
    if (A[1]>80&&A[4]>=1)
    {
        res+=8000;
    }
    if (A[1]>85&&A[2]>80)
    {
        res+=4000;
    }
    if (A[1]>90)
    {
        res+=2000;
    }
    if (A[2]>80&&A[3]==1)
    {
        res+=850;
    }
    
    printf("%d",res);

    return 0;
    
}