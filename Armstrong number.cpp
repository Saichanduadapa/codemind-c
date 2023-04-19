#include<stdio.h>
int main()
{
	int n,sum=0,r,temp;
	printf("enter the value\n");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("armstrong number");
	}
	else{
		printf("not an armstrong number");
	}
}
