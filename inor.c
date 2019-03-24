#include <stdio.h>

void main()
{
   int a[1000],n,i,t=0,c[100],j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    {
    c[i]=a[i];
    }
  for(i=0;i<n;i++)
  {
        for(j=i;j<n;j++)
        {
     
          if(a[i]>a[j])
          {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
            }
        }
  }
   for(i=0;i<n;i++)
   {
  for(j=0;j<n;j++)
  {
      
       if(a[i]==c[j])
       {
         printf("%d ",j+1);
}
}
}
    return 0;
}
