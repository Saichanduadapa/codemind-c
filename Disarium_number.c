#include<stdio.h>
#include<math.h>
int main()
{
    int n,dc=0,r,temp,temp1,sum=0;
    scanf("%d",&n);
    temp=n;
    temp1=n;
    while(n)
    {
        dc++;
        n=n/10;
    }
    while(temp)
    {
        r=temp%10;
        sum+=pow(r,dc);
        temp=temp/10;
        dc--;
    }
    if(temp1==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
    
}