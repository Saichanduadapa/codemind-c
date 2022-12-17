#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if(i%2==1)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}