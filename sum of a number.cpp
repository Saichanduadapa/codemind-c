#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("enter the value\n");
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("%d",s);
}
