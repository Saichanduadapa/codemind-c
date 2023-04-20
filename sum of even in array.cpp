#include<stdio.h>
int main()
{
	int arr[10],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		printf("%p\n",&arr[i]);
	}
