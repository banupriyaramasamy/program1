#include <stdio.h>

int main()
{

	 int n,a[10],i,j,d,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	   if(a[i]>a[j])
	   {
	       d=a[i]-a[j];
	   }
	   else
	   {
	        d=a[j]-a[i];  
	   }
	   if(d>max)
	   {
	       max=d;
	   }
	 }
	}
	printf("%d",max);
    return 0;
}
