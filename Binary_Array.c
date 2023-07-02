#include<stdio.h>
int main()
{
    int n,arr[100],i,flag=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]==0 || arr[i]==1)
        {
            continue;
        }
        else
        {
            flag++;
        }
    }
    if (flag!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}