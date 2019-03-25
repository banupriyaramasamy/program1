#include <stdio.h>

void main()
{
char a[100],b[100];
    for(int i=0;i<100;i++)
    {
        a[i]='\0';
    }
    scanf("%s %s",a,b);
    int m,n,i;
    m=strlen(a);
    n=strlen(b);
    if(m==n)
    {
    for(i=0;i<n;i++)
    {
        a[m]=b[i];
        m++;
    }
    printf("%s",a);
    }
    else
    {
        for(i=0;i<n;i++)
        {
        a[m-1]=b[i];
        m++;
        }
    printf("%s",a);
    }
    return 0;
}
