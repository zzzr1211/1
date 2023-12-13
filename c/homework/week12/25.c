#include <stdio.h>
#include <string.h>
int main()
{
	char a[500001];
	gets(a);
    int count=0;
    long long j=0,k;
	for(long long i=strlen(a)-1;i>=0;i--)
	{
		if (a[i]!=' ')
        {
            for(j=i;j>=0;j--)
            {
             if(a[j]==' ') break;
            }
            if (count!=0)
            {
                printf(" ");
            }
            k=j;
            for (j+=1; j <=i; j++)
            {
                printf("%c",a[j]);
            }
            
            count++;
            i=k;
        }
        
	}

}