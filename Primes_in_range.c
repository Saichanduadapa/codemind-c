#include<stdio.h>
#include<math.h>
int is_prime(int n){
   if(n<2){
       return 0;
   }
   else{
       for(int i=2;i<=sqrt(n);i++){
           if(n%i==0){
               return 0;
           }
       }
   }
   return 1;
}
int main(){
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(is_prime(i)==1){
            c++;
        }
    }
    printf("%d",c);
}
