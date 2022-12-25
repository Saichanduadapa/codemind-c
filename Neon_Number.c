#include<stdio.h>
int main()
{
	int num,sqr,r,sum=0;
	scanf("%d",&num);
	sqr=num*num;
	while(sqr>0)
	{
		r=sqr%10;
		sum+=r;
		sqr=sqr/10;
	}
	if(num==sum)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}