#include <stdio.h>

int main()
{

	 int n,n1,a[1000],b[10000],k[10000],i,j,t;
    scanf("%d %d",&n,&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        k[j]=a[i];
        j++;
    }
    for(i=0;i<n1;i++)
    {
        k[j]=b[i];
        j++;
    }
    for(i=0;k[i]!=NULL;i++)
    {
        for(j=i+1;k[j]!=NULL;j++)
        {
            if(k[i]>k[j])
            {
                t=k[j];
            k[j]=k[i];
                k[i]=t;
            }
        }
    }
    for(i=0;k[i]!=NULL;i++)
    {
        printf("%d ",k[i]);
    }
    return 0;
}
