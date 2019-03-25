#include <stdio.h>

int main()
{
    char s[20];
	scanf("%s",s);
	int len,flag;
	len=strlen(s);
	if(s[0]<'4' && s[1]<'10' && s[2]=='/' && s[3]<'2' && s[4]<'3' && s[5]=='/' && s[6]<'10' && s[7]<'10' && s[8]<'10' && s[9]<'10')
	{
		flag=1;
	}
	else
	{
		flag=0;
		
	}
	if(flag==0)
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}


    return 0;
}
