#include<stdio.h>
int main()
{
    int j,n,c=0,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        k=a[i];
        for(j=0;j<n;j++)
        {
            if(k>a[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}