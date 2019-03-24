#include <stdio.h>

int main(void)
{
   int n;
	scanf("%d",&n);
	int a[n],i,s=0,r[100],j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		s=s+a[i];
		r[j]=s;
		j++;
	}
	for(j=n;j>0;j--)
	{
		printf("%d ",r[j]);
	}
    return 0;
}
