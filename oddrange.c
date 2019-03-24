#include <stdio.h>
#include<string.h>
int main() 
{
	int l,r,j,s=0;
    scanf("%d %d",&l,&r);
    for(j=l;j<=r;j++)
    {
        if(j%2==1)
        {
            s=s+j;
        }
    }
    printf("%d",s);
	return 0;
}
