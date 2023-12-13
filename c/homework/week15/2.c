#include  <stdio.h>
struct student
{
    char num[20];
    int seat1;
    int seat2;
};

int main ()
{
    int n,m,search;
    scanf("%d",&n);
    struct  student stu[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d\n",stu[i].num,&stu[i].seat1,&stu[i].seat2);
    }
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&search);
        for (int j = 0; j < n; j++)
        {
            if (stu[j].seat1==search)
            {
                printf("%s %d\n",stu[j].num,stu[j].seat2);
                break;
            }
            
        }
        
    }
    
}