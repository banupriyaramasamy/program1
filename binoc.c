#include <stdio.h>

void main()
{
  long  long int n,r,s=1,t=0;
   scanf("%lld",&n);
   while(n)
   {
       r=n%10;
       n=n/10;
       t=t+(r*s);
       s=s*2;
   }
   printf("%llo",t);
    return 0;
}
