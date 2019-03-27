#include <stdio.h>

int main()
{
      int a,b,k=1,m=1,i,p=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
      k=k*i;
    }
    for(i=1;i<=b;i++)
    {
        m=m*i;
    }
    p=k/m;
    printf("%d",p);
    return 0;
}
