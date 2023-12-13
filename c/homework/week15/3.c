#include <stdio.h>
typedef struct 
{
    int num;
    double height;
} student;

int main ()
{
    int n,d1,d2,d3;
    student stu[1010],temp;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%lf",&stu[i].height);
        stu[i].num=i;
    }

    stu[0].num=0;
    stu[n+1].num=0;
    for (int i = 1; i <=n-1; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            if (stu[j].height<stu[j+1].height)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (stu[j].num==i)
            {
                d1=j;
            }
        }
        printf("%d %d %d\n",d1,stu[d1-1].num,stu[d1+1].num);
    }
    
}