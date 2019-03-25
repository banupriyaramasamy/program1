#include <stdio.h>

void main()
{
int m,n,l;
	scanf("%d %d",&m,&n);
	l=m+n;
	int a[l],i,j,k=0,r[l],c=0,t;
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				r[k]=a[i];
				k++;
				c=c+1;
			}
		}
	}
	for(k=0;k<c;k++)
	{
	  for(j=k+1;j<c;j++)
	  {
	  	if(r[k]>r[j])
	  	{
	  		t=r[k];
	  		r[k]=r[j];
	  		r[j]=t;
	  	}
	  }
	}
	for(i=0;i<c;i++)
	{
		printf("%d ",r[i]);
	}    

    return 0;
}
