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
        if(a[i]!='*')
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]!='*')
                {
                    if(a[i]==a[j])
                    {
                        b[k]=a[j];
                        k++;
                        a[j]='*';
                        a[i]='*';
                    }
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i;j<k;j++)
        {
      if(b[i]>b[j])
      {
          t=b[i];
          b[i]=b[j];
          b[j]=t;
      }
        }
    }
    
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}
