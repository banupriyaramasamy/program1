#include <stdio.h>

int main()
{

	int a[10],i,c=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			c=c+1;
		}
		if(a[i]>a[i+1])
		{
			break;
		}
	}
	printf("%d",c);
    return 0;
}
