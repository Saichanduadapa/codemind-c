#include<stdio.h>
int main()
{
	int n,arr[100],i,sum=0;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d\n",sum);
	
}
