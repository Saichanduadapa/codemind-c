
#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,sum1=0;
    int a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum1+=a[i][j];
        }
    }
    for(i=1;i<m-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(i!=0||j!=0)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum1-sum);
}