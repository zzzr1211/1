#include <stdio.h>

typedef struct 
{
    char name[10];
    int age;
    int grade;
}student;

int main ()
{
    int n;
    scanf("%d",&n);
    student stu[12];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d",stu[i].name,&stu[i].age,&stu[i].grade);
        stu[i].age++;
        stu[i].grade*=1.2;
        if(stu[i].grade>600)stu[i].grade=600;
        printf("%s %d %d\n",stu[i].name,stu[i].age,stu[i].grade);
    }
    
}