#include <stdio.h>
#include<string.h>
int main() 
{
	int i,n,k,x;
	char a[30];
	scanf("%s %d %d",a,&n,&k);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==n-1)
		{
			x=n-1;
			printf("%c",a[x+k]);
		}
	}
	return 0;
}
