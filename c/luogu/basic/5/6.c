#include <stdio.h>
#include <string.h>
int main ()
{
    int n,x,p,q;
    scanf("%d",&n);
    
    char a[1000],b[1000];
    scanf("%s",a);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);

        if (x==1)
        {
            scanf("%s",b);
            strcat(a,b);
            printf("%s",a);
        }else if (x==2)
        {
            scanf("%d %d",&p,&q);
            for (int i = p,j=0;j<q; i++,j++)
            {
                b[j]=a[i];
            }
            strcpy(a,b);
            a[q]='\0';
            printf("%s",a);   
        }else if (x==3)
        {
            scanf("%d",&p);
            scanf("%s",b);
            for (int i = p,j=strlen(b); i <strlen(b)+strlen(a)-p; i++,j++)
            {
                b[j]=a[i];
            }
            a[p]='\0';
            strcat(a,b);
            printf("%s",a);
        }else
        {
            scanf("%s",b);
            char *ans = strstr(a, b);
			printf("%d", ans!=NULL?(int)(ans - a):-1);
        }
        printf("\n");
    }
    
}