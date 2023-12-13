#include <stdio.h>

int main(){
	int n,i=0,a[201]={0},m=0,print=0,count=0;
    scanf("%d",&n);

     while(scanf("%d",&a[i]) != EOF){ 
         i++;
         m++;
     }

     for ( i = 0; i < m; i++)
     {
        for (int j  = 0; j < a[i]; j++)
        {
            printf("%d",print%2);
            count++;
            if (count%n==0)
            {
                printf("\n");
            }
            
        }
        print++;
     }
     
    
    
	return 0;
}