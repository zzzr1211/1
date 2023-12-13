#include <stdio.h>
typedef struct
{
    char name[10];
    int a;
    int b;
    int c;
    int sum;
}student;


int main ()
{
    student stu[1000];
    int n,top=0;
    scanf("%d",&n);
    for (int  i = 0; i <n; i++)
    {
        getchar();
        getchar();
        scanf("%s%d%d%d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
        stu[i].sum=stu[i].a+stu[i].b+stu[i].c;
        if (stu[i].sum>stu[top].sum)
        {
            top=i;
        }
                   
    }
    
    printf("%s %d %d %d",stu[top].name,stu[top].a,stu[top].b,stu[top].c);
}