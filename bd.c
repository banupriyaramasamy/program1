#include <stdio.h>

int main()
{
    int a,r,t=0,s=1;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        t=t+(r*s);
        s=s*2;
    }
printf("%d",t);
    return 0;
}
