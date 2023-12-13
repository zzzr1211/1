#include <stdio.h>
#include <math.h>
int main ()
{
	int n,b[10000];
	double a[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=i;
	}
    for (int i = 0; i < n; i++)
    {
        a[i]=3.14*1.33*a[i]*a[i]*a[i];
    }
    
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];

                b[j]=b[j]+b[j+1];
				b[j+1]=b[j]-b[j+1];
				b[j]=b[j]-b[j+1];
			}			
		}
	}
    
	for(int i=0;i<n;i++){
		printf("%.2lf %d\n",a[i],b[i]+1);
	}
	
	
}