#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    while(c)
    {
        if(a%c==0 && b%c==0)
    {
        printf("%d",c);
        break;
    }
    c--;
    }
}