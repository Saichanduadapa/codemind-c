#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,a[100][100],i,j,sum=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
           sum+=a[i][j]; 
        }
    printf("%d ",sum);
    }
}