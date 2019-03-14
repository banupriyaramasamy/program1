#include <stdio.h>

int main()
{
    int a,r,t=0,s=1;
    scanf("%d",&a);
    while(a)
    {
        r=a%2;
        a=a/2;
        t=t+(r*s);
        s=s*10;
    }
printf("%d",t);
    return 0;
}
