#include<stdio.h>
int main()
{
    int min,h,m;
    scanf("%d",&min); 
    h=min/60;
    m=min%60; 
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}