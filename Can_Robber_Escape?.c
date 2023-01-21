#include<stdio.h>
int main()
{
    int num,i,arr[100],odd=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            odd++;
        }
    }
    if(odd>2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}