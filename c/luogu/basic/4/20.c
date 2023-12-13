#include <stdio.h>
int main ()
{
    int n,flag[7]={0};
    scanf("%d",&n);
    char a[10][10],b[10][10],c[10][10];
    getchar();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c",&b[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j]=a[i][n-1-j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j]==a[n-1-j][i])
            {
            }else {flag[0]=1;break;}
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j]==a[n-1-i][n-1-j])
            {
            }else {flag[1]=1;break;}
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j]==a[j][n-1-i])
            {
            }else {flag[2]=1;break;}
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j]==a[i][n-1-j])
            {
            }else {flag[3]=1;break;}
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j]==c[n-1-j][i]||b[i][j]==c[n-1-i][n-1-j]||b[i][j]==c[j][n-1-i])
            {
            }else {flag[4]=1;break;}
            
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]==b[i][j])
            {
            }else {flag[5]=1;break;}
            
        }
    }
    
    
    for (int i = 0; i < 7; i++)
    {
        if (flag[i]==0)
        {
            printf("%d",i+1);break;
        }
        
    }
    
    

}

