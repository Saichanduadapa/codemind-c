 /*i=0
 arr[i]==se--> 21==14 return i
 false --> i++
 if i==n --->return -1
 */
 #include<stdio.h>
 int search(int *arr,int n,int sc)
 {
 	int i,res;
 	for(i=0;i<n;i++)
 	{
 		if(arr[i]==sc)
 		{
 			return i;
		 }
	 }
	 return -1;
 	
 }
 int main()
 {
 	int n,i,sc,arr[100],res;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 	scanf("%d",&sc);
	 res=search(arr,n,sc);
	 printf("%d",res);
 	
 }
