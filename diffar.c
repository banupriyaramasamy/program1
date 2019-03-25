#include <stdio.h>

int main()
{
    int n,a[10],i,m;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {
     if(a[i]-a[i+1]==m)
     {
    printf("%d",a[i]);
    break;
     }
         
 }
 
    

    return 0;
}
