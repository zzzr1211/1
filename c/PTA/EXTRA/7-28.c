#include<stdio.h>
#include<math.h>
int main ()
{
    long long n,p,t,count=0,s=0,pos;
    scanf("%ld%ld%ld",&n,&p,&t);

    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&pos);
        if (abs(p-pos)<=t)
        {
            s+=abs(p-pos);
            count++;
            p=pos;
        }
        
    }
    printf("%ld %ld",count,s);
}