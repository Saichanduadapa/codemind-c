#include<stdio.h>
#include<math.h>
int isprime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=floor(sqrt(n));i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(isprime(i) && isprime(j) && i*j==n){
                c+=1;
                printf("%d %d",i,j);
            }
        }
    }
    if(c==0){
        printf("%d",-1);
    }
}