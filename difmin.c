#include <stdio.h>

void main()
{

	 int a[10],i,j,t,n,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
             {
             if(a[i]>a[j])
             {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
             }
                 }
             ans=a[2]-a[1];
             printf("%d",ans);
    return 0;
}
