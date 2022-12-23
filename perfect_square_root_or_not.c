#include <stdio.h>
#include <math.h> 
int main()
{
    int num,i;
    float f;
    scanf("%d",&num);
    f=sqrt((double)num);
    i=f;
    if(f==i)
    printf("True"); 
    else
    printf("False");
    
}