#include <stdio.h>

void main()
{
int n;
	scanf("%d",&n);
	int a[n],i,s=0,r;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	r=s;
	printf("%d",r);

    return 0;
}
