#include<stdio.h>
int main(){
    int n,sum=0,pro=1;
    scanf("%d",&n);
    while(n!=0){
        int r=n%10;
        sum+=r;
        pro*=r;
        n/=10;
    }
    printf("%d",pro-sum);
}