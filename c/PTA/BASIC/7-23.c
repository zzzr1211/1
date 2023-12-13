#include <stdio.h>
#include <math.h>
int main ()
{
    long long n;
    scanf("%ld",&n);
    long long m=n;
    int count=0;
    while (m>0)
    {
        m/=10;
        count++;
    }
    char a[10]={'a','b','c','d','e','f','g','h','i','j'};
    if(n==0)printf("a");
    int x=-1;
    int y=x;
    while (count>0)
    {
        count--;
        x=n/pow(10,count);
        y=(int)(n/pow(10,count-1))%10;
        if(y==0&&x==0){}
        else{printf("%c",a[x]);}
        if (count==8)
        {
            printf("Y");
        }else if (count==4)
        {
            printf("W");
        }
        if(x!=0){
        if (count%4==3)
        {
            printf("Q");
        }else if (count%4==2)
        {
            printf("B");
        }else if (count%4==1)
        {
            printf("S");
        }
        
        }
        while(n>=pow(10,count))
        {
            n-=pow(10,count);
        }
   
    }
    
}