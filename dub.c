#include <stdio.h>

int main()
{
   int a[1000],num,i,j;
   scanf("%d",&num);
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
   }
    for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
				a[i]='+';
			}
		}
	}
	for(i=0;i<num;i++)
	{
		if(a[i]!='+')
		{
			printf("%d ",a[i]);
		}
	}
    return 0;
}
