#include <stdio.h>

int main(void)
{
   int n;
	scanf("%d",&n);
	int a[n],i,s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		printf("%d ",s);
	}
   
    return 0;
}
