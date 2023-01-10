#include<stdio.h>
int factorial(int n)
{
    
        if(n==1)
        {
            return 1;
        }
        if(n==0)
        {
        	return 0;
		}
        else
        {
           n=n*factorial(n-1);
        }
    return n;
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		
	printf("%d
",factorial(arr[i]));
   }
}