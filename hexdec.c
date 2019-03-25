#include <stdio.h>

int main()
{
 char s[30];
	scanf("%s",s);
	int i,l,v,sum=0;
	l=strlen(s);
	int j=l-1;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A' && s[i]<='F')
		v=(s[i]-65)+10;
	
		else if(s[i]>='0' && s[i]<='9')
			v=s[i]-48;
		sum=sum+(v*(pow(16,j)));
		j--;
	}
	printf("%d",sum);
    return 0;
}
