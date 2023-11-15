#include<stdio.h>
int main(){
    int e=0,o=0,n;
    scanf("%d",&n);
    while(n!=0){
        int r=n%10;
        //printf("%d",r);
        if(r%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
        n/=10;
    }
    if(e==0){
        printf("Odd");
    }
    else if(o==0){
        printf("Even");
    }
    else{
        printf("Mixed");
    }
}