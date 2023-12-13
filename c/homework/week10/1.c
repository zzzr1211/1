#include <stdio.h>
void print(int count);
int space=0;
int main ()
{
    char a,b=' ';
    int count=0;
    scanf("%c",&a);
    
    do
    {
        if (a!=' '&&a!='.')
        {
            count++;
        }else if (b==' ')
        {
        }else {
        print(count);
        count=0;
        }
        
        b=a;
        scanf("%c",&a);
    } while (a!='\n');

}

void print(int count)
{
    if (space!=0)
    {
        printf(" ");
    }else space=1;

    printf("%d",count);

}