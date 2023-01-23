
#include<stdio.h>
int main()
{
    int n,i,j,k=0,a[100],b[100],res[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               res[k++]=a[i]+b[j]; 
            }
        }
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",res[k]);
    }
    
}