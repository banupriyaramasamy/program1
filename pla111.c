#include <stdio.h>

int main()
{
    int n,a[10],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=n-1;i>=1;i--)
    {
        c=c+a[i];
    }
    printf("%d",c);

    return 0;
}
