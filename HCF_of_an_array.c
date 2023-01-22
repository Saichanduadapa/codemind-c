#include<stdio.h>

int main()
{
    int n,i,gcd;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//2 4 6 7 10
    }
    gcd=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%gcd==0)
       {
           j++;
       }
       else
       {
           gcd=arr[j]%gcd;
          i++;
       }
    }
    printf("%d",gcd);
    return 0;
}