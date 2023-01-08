#include<stdio.h>
int happy(int n)
{
    int r,sum=0;
    while(n)
    {
        r=n%10;
        sum+=r*r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int num,x,y;
    scanf("%d",&num);
    while(num)
    {
         x=happy(num);
         y:x=happy(x);
        if(x<9)
        {
            if(x==1 || x==7)
            {
                printf("True");
                break;
            }
            else
            {
                printf("False");
                break;
            }
        }
        else
        {
           goto y;
        }
    }
}