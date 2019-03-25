#include <stdio.h>

int main(void)
{
  int n,r,b1=1,b=0,c=0;
   scanf("%d",&n);
   while(n)
   {
       
       r=n%2;
       if(r==1)
       {
         c++;
       }
       n=n/2;
       b=b+(r*b1);
      b1=b1*10;
      
   }
   printf("%d",c);

    return 0;
}

