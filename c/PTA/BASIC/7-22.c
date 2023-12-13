#include <stdio.h>
int main ()
{
    int v1=3,v2=9;
    int s1=0,s2=0;
    int t;
    scanf("%d",&t);
    
    for (;t>10;)
    {
        t-=10;
        s2+=v2*10;
        s1+=v1*10;
        if(s1<s2){
            if (t<=30)
            {
                s1+=v1*t;
                t=0;
            }else{
                s1+=v1*30;
                t-=30;
            }
            
        }
    }
    s2+=v2*t;
    s1+=v1*t;
    
    if (s1>s2)
    {
        printf("@_@ %d",s1);
    }else if (s1<s2)
    {
        printf("^_^ %d",s2);
    }else printf("-_- %d",s1);
    
    
}