#include<stdio.h>
void evenorodd(int n)
{
	if(n%2==0)
	printf("Even");
	else
	printf("Odd");
}
int main()
{
	int n;
	printf("enter the value\n");
	scanf("%d",&n);
	evenorodd(n);
}
