#include<stdio.h>
int main(){
    int a,b;
    int n=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        if (a%i==0 && b%i==0){
            n=i;
        }
    }
    printf("%d",n);
}