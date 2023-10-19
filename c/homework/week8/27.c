#include <stdio.h>

int main ()
{
    int M[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m,d,res;
    scanf("%d/%d/%d",&y,&m,&d);
    if ((y%4==0&&y%100!=0)||y%400==0)
    {
        M[1]=29;
    }

    res=0;

    for (int i = 0; i < m-1; i++)
    {
        res+=M[i];
    }
    
    res+=d;

    printf("%d",res);

    return 0;
}