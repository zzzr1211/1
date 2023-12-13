#include <stdio.h>
#include <string.h>
#include <math.h>
int isPrime(int n);
int main ()
{
    char a[101];
    int b[26]={0},max=0,min=100;

    scanf("%s",a);

    for (int i = 0; i < strlen(a); i++)
    {
        b[a[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (b[i]<min&&b[i]!=0)
        {
            min=b[i];
        }
        
        if (b[i]>max)
        {
            max=b[i];
        }
        
    }
    
    if (isPrime(max-min))
    {
        printf("Lucky Word\n");
        printf("%d",max-min);
    }else printf("No Answer\n0");        
    }
    
int isPrime(int n)
{
    int res=1;
    if (n%2==0&&n!=2||n==1)
    {
        res=0;
    }else{
        for (int i = 3; i <=sqrt(n); i+=2)
        {
            if (n%i==0)
            {
                res=0;
                break;
            }
            
        }
    }
    
    return res;
}