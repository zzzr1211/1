#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct DSLlist
{
    int num,ins_num;
    struct DSLlist *prior,*next;
}DSLlist;

int main ()
{
    DSLlist *p,*q,*head=NULL,*tail=NULL;
    int n,insert=0,k;
    char demand[5];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        getchar();
        scanf("%s",demand);

        if (strcmp(demand,"L")==0)
        {

            p=(DSLlist*)malloc(sizeof(DSLlist));
            p->next=head;
            p->prior=NULL;
            scanf("%d",&p->num);
            p->ins_num=++insert;
            if(head!=NULL)head->prior=p;
            else tail=p;
            head=p;

        }else if(strcmp(demand,"R")==0){

            p=(DSLlist*)malloc(sizeof(DSLlist));
            p->next=NULL;
            p->prior=tail;
            scanf("%d",&p->num);
            p->ins_num=++insert;
            if(tail!=NULL)tail->next=p;
            else head=p;
            tail=p;

        }else if(strcmp(demand,"D")==0){

            scanf("%d",&k);
            for (p = head; p != NULL ;p = p->next)
            {
                if(p->ins_num==k)
                {
                    if(p->prior!=NULL)p->prior->next=p->next;
                    else head=p->next;

                    if(p->next!=NULL)p->next->prior=p->prior;
                    else head=p->prior;
                }
            }
            
        }else if(strcmp(demand,"IL")==0){

            scanf("%d",&k);
            for (p = head; p != NULL ;p = p->next)
            {
                if(p->ins_num==k)
                {
                    q=(DSLlist*)malloc(sizeof(DSLlist));
                    scanf("%d",&q->num);
                    q->ins_num=++insert;
                    q->next=p;
                    
                    q->prior=p->prior;
                    if(p->prior!=NULL)p->prior->next=q;
                    else head=q;
                    p->prior=q;
                }
            }

        }else if(strcmp(demand,"IR")==0){

            scanf("%d",&k);
            for (p = head; p != NULL ;p = p->next)
            {
                if(p->ins_num==k)
                {
                    q=(DSLlist*)malloc(sizeof(DSLlist));
                    scanf("%d",&q->num);
                    q->ins_num=++insert;
                    q->prior=p;
                    q->next=p->next;
                    if(p->next!=NULL)p->next->prior=q;
                    else head=q;
                    p->next=q;
                }
            }
            
        }
        
    }
    for (p = head ; p!=NULL; p=p->next)
    {
        printf("%d ",p->num);
    }
    
}
