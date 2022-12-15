
#include<stdio.h>
int main()
{
    int n,m,a=0,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%3==0)
        a++;
        }
        printf("%d",a);
    
}
