#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,c,k=0,b[10],m,j,t;
  char a[10][10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      
      scanf("%s",&a[i]);
      
  }
  
   for(i=0;i<n;i++)
  {
c=strlen(a[i]);
      
 b[k]=c;
      k++;
  }
   for(i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
   {
       if(b[i]>b[j])
       {
           
           
           t=b[i];
           b[i]=b[j];
           b[j]=t;
       }
   }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          
          if(b[i]==strlen(a[j]))
          printf("%s\n",a[j]);
      }  
  }

	return 0;
}
