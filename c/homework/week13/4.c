#include <stdio.h>
int Automorphic(int x);
int main ()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    for (int i = a; i <=b; i++)
    {
        if (Automorphic(i))
        {
            printf("%d\n",i);
            count++;
        }
    }
    if (count==0)
    {
        printf("None");
    }
       
}
int Automorphic(int x)
{
    int res=1;
    int squa=x*x;
    while (x>0)
    {
        if (squa%10!=x%10)
        {
            res=0;
            break;
        }
        x/=10;
        squa/=10;
    }
    
    return res;
}