#include <stdio.h>

int main(void)
{
  char a[100][100];
    int i,j,n,f=0,m=0,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
     c=strlen(a[i]);
    if(c>m)
    {
     m=c;
    }
    }
    for(j=0;j<n;j++)
    {
    for(i=1;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
    if(a[j][k]<=a[i][k])
    {
        f=1;
    }
    else
    {
        f=0;
        break;
    }
        }
}
if(f==1)
{
    printf("%s",a[j]);
    break;
}
}

    return 0;
}
