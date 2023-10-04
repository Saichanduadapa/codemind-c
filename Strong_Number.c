#include<stdio.h>
int fact(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int s=0;
    while(temp!=0){
        int r=temp%10;
        s+=fact(r);
        temp/=10;
    }
    if(s==n){
        printf("The number %d is a strong number",n);
    }
    else{
        printf("The number %d is not a strong number",n);
    }
}
