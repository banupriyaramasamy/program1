#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20],b[20];
	int i,flag;
	scanf("%s %s",a,b);
	int l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			if(a[i]=b[i])
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("no");
		}
		else
		{
			printf("yes");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
