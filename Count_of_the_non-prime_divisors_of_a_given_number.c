int  isprime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c+=1;
        }
    }
    if(c==2){
        return 1;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0 && isprime(i)==0){
           // printf("%d ",i);
            c++;
        }
    }
    printf("%d",c);
}