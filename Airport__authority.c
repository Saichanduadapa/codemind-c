#include<stdio.h>
int weights(int n,int *arr,int t)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        if (arr[i]<=t)
        {
            s+=1;
        }
        else
        {
            s+=2;
        }
    }
    return s;
}
int main()
{
    int n,arr[100],i,res,t;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    res=weights(n,arr,t);
    printf("%d",res);
}