#include <stdio.h>
#include "student.h"

void read(FILE *fp,int index);

int main ()
{
    FILE *fp = fopen("student.data","r");
    if(fp){
        fseek(fp,0L,SEEK_END);
        long size = ftell(fp);
        int number =size/sizeof(Student);
        int index=0;
        printf("��%d�����ݣ��㿴Ҫ�ڼ�����",number);
        scanf("%d",&index);
        read(fp,index-1);
        fclose(fp);
    }
    return 0;
}

void read(FILE *fp,int index)
{
    fseek(fp,index*sizeof(Student),SEEK_SET);
    Student stu;
    if (fread(&stu,sizeof(Student),1,fp)==1)
    {
        printf("��%d��ѧ����",index+1);
        printf("\t������%s\n",stu.name);
        printf("\t�Ա�");
        switch(stu.gender){
            case 0:printf("��\n");break;
            case 1:printf("Ů\n");break;
            case 2:printf("����\n");break;
        }
        printf("\t���䣺%d",stu.age);
    }
    
}