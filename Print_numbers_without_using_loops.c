#include<stdio.h>
int main()
{
    int n,i=0,x;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
      x: i=i+1;
      if(i<=n)
      {
       printf("%d ",i);
      goto x;
      }
   }
   else
   {
       printf("The Number Series is Not Possible Print");
   }
}