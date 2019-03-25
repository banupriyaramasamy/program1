#include <stdio.h>

int main()
{
    int n,a[10],i,m,s=1;
 scanf("%d %d",&n,&m);
 for(i=1;i<=m;i++)
 {
    s=s*n;
 }
 printf("%d",s);
      return 0;
}
