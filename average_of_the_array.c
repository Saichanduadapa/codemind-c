#include<stdio.h>
int main()
{
    int n,i,arr[1000];
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
     avg=sum/n;
    printf("%.2f",avg);
}