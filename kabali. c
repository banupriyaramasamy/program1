#include<stdio.h>
#include<string.h>
void main
{
   char b[10];
    char str[]="kabali";
    int i,j,temp=0,n,n1,k=0,len,c=0;
    n=strlen(str);
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
   while(k<n1)
   {
       scanf("%s",b);
       len=strlen(b);
       if(n==len)
       {
           for(i=0;i<n;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   if(b[i]>b[j])
                   {
                       temp=b[i];
                       b[i]=b[j];
                       b[j]=temp;
                   }
               }
           }
           if(strcmp(str,b)==0)
           {
               c++;
           }
       }k++;
   }
   printf("%d",c);
	return 0;
}
