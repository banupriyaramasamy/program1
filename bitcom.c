#include <stdio.h>

int main()
{
    int n,k,m=0,f=1,d=1,i,e=1;
    scanf("%d %d",&n,&k);
    m=n-k;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=1;i<=m;i++)
    {
        d=d*i;
    }
    for(i=1;i<=k;i++)
    {
        e=e*i;
    }
    printf("%d",(f/(d*e)));

    return 0;
}
