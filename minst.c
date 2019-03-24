#include <stdio.h>

void main()
{
   int a[1000],n,i,s=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i!=n-1)
       {
       s=s+(a[i]+a[i+1]);
       }
   }
   printf("%d",s);

    return 0;
}
