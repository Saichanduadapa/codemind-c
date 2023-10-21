#include<stdio.h>
bool is_even(int n){
    int c=0;
    while(n>0){
        c+=1;
        n/=10;
    }
    if(c%2==0){
        return true;
    }
    return false;
}
int main(){
    int n,ar[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(is_even(ar[i])){
            c+=1;
            //printf("%d",ar[i]);
        }
    }
    printf("%d",c);
}