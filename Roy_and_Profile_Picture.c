#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d%d",&l,&n);
    while(n)
    {
        scanf("%d%d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
        n--;
    }
    
}