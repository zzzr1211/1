#include <stdio.h>
struct student
{
    int gender;
    char name[10];
    int grouped;
};

int main ()
{
    int n,i,j;
    scanf("%d",&n);
    struct student stu[51];
    for (i = 0; i < n; i++)
    {
        scanf("%d %s",&stu[i].gender,stu[i].name);
        stu[i].grouped=0;
    }
    for (i = 0; i < n; i++)
    {
        if(stu[i].grouped)continue;        
        for (j=n-1; j>=0; j--)
        {
            if(stu[j].gender+stu[i].gender==1&&stu[j].grouped==0)break;
        }
        printf("%s %s\n",stu[i].name,stu[j].name);
        stu[i].grouped=stu[j].grouped=1;        
    }
    
    
}