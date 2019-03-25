#include <stdio.h>

void main()
{
   long int n,k,i=0,a[1000],rem,j=0,c=0,m,k2;
    scanf("%ld %ld",&n,&k2);
    while(n)
    {
        rem=n%10;
        n=n/10;
        a[i]=rem;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]==a[k])
            {
                a[k]='*';
            }
        }
    }
    j=0;
    while(j<=k2)
    {
    for(m=0;m<i;m++)
    {
        if(a[m]!='*')
        {
        if(a[m]==j)
        {
            c++;
        }
        }
    }
    j++;
    }
    if(c==k2+1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
