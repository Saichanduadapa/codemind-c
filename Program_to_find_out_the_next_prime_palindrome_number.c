// next prime palindrome c|control
#include<stdio.h>
#include<math.h>
int is_pal(int n){
    int s=0;
    int temp=n;
    while(n>0){
        int r=n%10;
        s=(s*10)+r;
        n/=10;
    }
    if(temp==s){
        return 1;
    }
    return 0;
}
int is_prime(int n){
    if(n<2){
        return 0;
    }
    else
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=n+1;i<=100000;i++){
        if(is_prime(i) && is_pal(i)){
            printf("%d",i);
            break;
            
        }
        
    }
}
