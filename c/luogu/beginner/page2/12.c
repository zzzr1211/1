#include <stdio.h>
#include <string.h>
int main ()
{
    int win=0,chess[10]={};
    char a[10];
    scanf("%s",a);

    if (strlen(a)<9)
    {

        if(strlen(a)%2==0) win=2;
        else win=1;

    }else{

        for (int i = 0; i < 9; i++)
        {
            if(i%2==0)chess[a[i]-'0']=1;
            else chess[a[i]-'0']=2;
        }

        if(chess[1]+chess[4]+chess[7]==3||
            chess[2]+chess[5]+chess[8]==3||
            chess[3]+chess[6]+chess[9]==3||
            chess[1]+chess[2]+chess[3]==3||
            chess[4]+chess[5]+chess[6]==3||
            chess[7]+chess[8]+chess[9]==3||
            chess[1]+chess[5]+chess[9]==3||
            chess[3]+chess[5]+chess[7]==3)
                win=1;
        else if (chess[1]+chess[4]+chess[7]==6||
            chess[2]+chess[5]+chess[8]==6||
            chess[3]+chess[6]+chess[9]==6||
            chess[1]+chess[2]+chess[3]==6||
            chess[4]+chess[5]+chess[6]==6||
            chess[7]+chess[8]+chess[9]==6||
            chess[1]+chess[5]+chess[9]==6||
            chess[3]+chess[5]+chess[7]==6)
                win=2;
        
    }
    
    if(win==0)printf("drew.");
    else if(win==1)printf("xiaoa wins.");
    else if(win==2)printf("uim wins.");
}