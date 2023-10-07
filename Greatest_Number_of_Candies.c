#include<stdio.h>
int main(){
    int n,ar[100],k,m=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(m<ar[i]){
            m=ar[i];
        }
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(ar[i]+k>=m){
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}