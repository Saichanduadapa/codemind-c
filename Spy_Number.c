#include<stdio.h>
int main()
{
    int n,r,sum=0,prdt=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        prdt=prdt*r;
        n=n/10;
    }
    if(sum==prdt)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}