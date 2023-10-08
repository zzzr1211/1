#include <stdio.h>
int main()
{
    int x;
    int mask=1;
    scanf("%d",&x);

     while (mask<=x/10){
        mask*=10;
    }
    //printf("%d",mask);
do{
        int t=x/mask;
        printf("%d",t);
        x%=mask;
        if (mask>=1)
        {
            printf(" ");
            mask/=10;
        }
        
        
    }while (mask>0);
    return 0;
}