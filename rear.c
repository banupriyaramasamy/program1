#include <stdio.h>

int main()
{
    int a[10],n,t,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {c=0;
    for(j=1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            c=1;
        }
    }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
