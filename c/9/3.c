#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main ()
{
    int a[]={1,2,3,4,5,6,10,15,87,9,54,35,};
    int min,max;

    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d,max=%d\n",min,max);

    return 0;
}

void minmax(int a[],int len,int *min,int *max)
{
    *min=*max=a[0];
    for (int i = 1; i < len; i++)
    {
        if (a[i]<*min)
        {
            *min=a[i];
        }
        if (a[i]>*max)
        {
            *max=a[i];
        }
        
        
    }
    


}