#include <stdio.h>

int main()
{
 char a[100];
    int i,j=0,b[100],m=0,c1=0,s=0,t,f,c,k;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
        else
        {
            b[j]=c;
            j++;
            c=0;
        }
    }
    b[j]=c;
    j++;
for(i=0;i<j;i++)
{
    s++;
        if(m<b[i])
        {
            m=b[i];
            t=s;
            k=i;
        }
}
for(i=0;i<k;i++)
{
    c1+=b[i];
}
f=c1+t;
for(i=f-1;i<f+m;i++)
{
    printf("%c",a[i]);
}
    return 0;
}
