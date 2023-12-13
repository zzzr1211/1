#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Today, I ate %d apple",n);
    if(n>1)printf("s.");
    else printf(".");
    
}