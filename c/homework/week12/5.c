
#include <stdio.h>
int main()
{
  int a[3][3]={1,2,3,4,5,6,7,8,9};
  int sum1=0,sum2=0,k,i,j;
  for(k=0;k<3;k++)
   
sum1+=a[k][k]
;
for(i=0;i<3;i++)
   for(j=2;j>=0;j--)
      if( 
i+j==2
   )
          sum2=sum2+a[i][j];
printf("sum1=%d  sum2=%d\n",sum1,sum2);
return 0;
}
