#include <stdio.h>
int main()
{
    int a,b;
    int min;

    scanf("%d %d",&a,&b);
    if (a<b)
    {
        min=a;
    }else{min=b;};

    int i,ret;
    
    
    for (  i= 1;i<=min ; i++)
    {
        if(a%i==0){
            if(b%i==0){
                ret=i;
            }
        }
    }
       
    printf("%d��%d�����Լ����%d��\n",a,b,ret);
    return 0;
}