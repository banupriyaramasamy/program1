#include <stdio.h>

int main()
{
    int n,k[100],i=0,a,c,m,r;
   scanf("%d",&a);
     while(a)
     {
         r=a%10;
         a=a/10;
         k[i]=r;
         i++;
         c=i;
     }
     m=k[0]+k[c-1];
    printf("%d",m);
    return 0;
}
