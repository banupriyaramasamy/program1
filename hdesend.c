#include <stdio.h>

int main()
{
    int a[100],i,j,n,t,b[100],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
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
    
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
