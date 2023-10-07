// self dividing numbers c|basic
#include<stdio.h>
int is_self(int n){
    int temp=n;
    int c=0;
    while(temp!=0){
        int r=temp%10;
        if(r!=0 && n%r==0){
            c+=1;
        }
        else{
            return 0;
        }
        temp/=10;
    }
    return 1;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(is_self(i)){
            printf("%d ",i);
        }
    }
}