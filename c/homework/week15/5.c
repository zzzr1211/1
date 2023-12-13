#include <stdio.h>
#include <stdlib.h>

typedef struct SLlist
{
    int x;
    struct SLlist *next;
}SLlist;

int main ()
{
    SLlist *p,*head=NULL,*q=NULL;
    int a,space=0;
    scanf("%d",&a);
    while (a!=-1)
    {
        if (a%2==0){scanf("%d",&a);continue;}
        
        p=(SLlist *)malloc(sizeof(SLlist));
        p->x=a;
        p->next=NULL;

        if (head==NULL)
        {
            head=p;
        }else
        {
            q->next=p;
        }
        
        q=p;

        scanf("%d",&a);
    }
    
    for ( p=head ;p!=NULL;p=p->next)
    {
        if(space)printf(" ");
        printf("%d",p->x);
        space++;
    }
    
}