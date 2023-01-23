#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j] && a[i]!=0 && a[j]!=0)
            {
                c++;
                a[i]=0;
                a[j]=0;
            }
        }
    }
    printf("%d",c);
}