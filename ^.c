#include <stdio.h>

int main(void)
{
    int n,s=0,sq,r;

	scanf("%d",&n);

	while(n!=0)

	{

		r=n%10;

		sq=r*r;

		s=s+sq;

		n=n/10;

	}

	printf("\n%d",s);

return 0;
}
