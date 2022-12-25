#include<stdio.h>
int factorial(int num)
{
    int sum=1,i;
    for(i=num;i>=1;i--)
    {
        sum*=i;
    }
return sum;
}
int main()
{
    int n,r,temp,fact=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        fact+=factorial(r);
        n=n/10;
    }
    if(fact==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    
}