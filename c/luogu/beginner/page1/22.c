#include <stdio.h>
int main()
{
    int a,b,c,d,t,res;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&t);
        res=0;
        if (t%(a+b)<=a&&t%(a+b)>0)
        {
            res++;
        }
        if (t%(c+d)<=c&&t%(c+d)>0)
        {
            res++;
        }
        
        if (res==0)
        {
            printf("none\n");
        }else if(res==1){
            printf("one\n");
        }else if (res==2)
        {
            printf("both\n");
        }
        
        
    }
    
} 