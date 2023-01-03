#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],j,i,sum=0;;
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
        sum=sum+a[i][j];
    }
    }
     
    printf("%d",sum);
}