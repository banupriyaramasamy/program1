#include <stdio.h>

int main()
{
char a[30];
	int i,j,t,n;
	scanf("%s",a);
	n=strlen(a);
	i=0;j=n-1;
	while(i<j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
		if(i==n-1)
		{
			break;
		}
		printf("-");
		
	}
    return 0;
}
