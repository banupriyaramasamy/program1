#include <stdio.h>

int main()
{
    
     int n,c=0,d=0,t1,t2;
	scanf("%d",&n);
	int a[n],j,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			if(a[i]%2==0)
			{
				c=c+1;
				t1=a[i];
			}
			else
			{
			    d=d+1;
			    t2=a[i];
			}
	}
	if(c==1)
	{
	printf("%d",t1);
    }
    else
    {
  	printf("%d",t2);  
    }

    return 0;
}
