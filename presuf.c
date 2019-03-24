#include <stdio.h>

int main(void)
{
   int n,a[100],i,s=0,r[100],j=0,b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
        s=s+a[i];
        b[j]=s;
        j++;
    }
    j=0;
    s=0;
    for(i=n-1;i>=0;i--)
    {
        s=s+a[i];
        r[j]=s;
        j++;
    }
    if(n==1)
    {
        printf("%d ",a[i]);
    }
    else
    {
    i=0;
    while(i<n)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",b[i]+r[j]);
            i++;
            
        }
    }
    }
    return 0;
}
