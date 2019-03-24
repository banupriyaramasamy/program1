#include <stdio.h>

int main()
{
    int i,j,m,s=0,a[30][40];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        
            if(a[i][0]<a[i][1])
            {
                s++;
            }
        
    }
printf("%d",s);
return 0;
}
