#include<stdio.h>
int main()
{
    int n,sqr,rev=0,revs,revsqr=0,r; 
    scanf("%d",&n);
    sqr=n*n;
    while(n)
    {
        r=n%10; 
        rev=rev*10+r;
        n=n/10;
        }
        revs=rev*rev;
        while(revs) 
        {
            r=revs%10; 
            revsqr=revsqr*10+r;
            revs=revs/10; 
            }
            if(sqr==revsqr)
            {
                printf("True");
            } else { printf("False");
            }
    
}