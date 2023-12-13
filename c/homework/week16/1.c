#include <stdio.h>
#include <stdlib.h>

typedef struct arkman
{
    int num;
    struct arkman *next;
}ark;

int main ()
{
    int n,num;
    ark *p,*head=NULL,*q;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&num);

        p=(ark*)malloc(sizeof(ark));
        p->num=i;

        if(head==NULL){head=p;head->next=NULL;}
        else{
            if(num==0){
                p->next=head;
                head=p;
            }else{
                for ( q = head ; q->next != NULL; q = q->next )
                {
                    if(q->num==num)break;
                }
                p->next=q->next;
                q->next=p;
            }
        }
        
    }
    
    for ( q = head ; q->next != NULL ; q = q->next )
    {
        printf("%d ",q->num);
    }
    printf("%d",q->num);
}
