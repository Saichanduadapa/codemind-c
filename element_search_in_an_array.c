#include<stdio.h>
int main()
{
    int n,i,x,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
    		if(arr[i]==x)
    		{
    			c=1;
    			break;
			}
			else
			{
				c=0;
			}
    }
    if(c==1)
    {
    	printf("True");
	}
	if(c==0)
	{
		printf("False");
	}
}