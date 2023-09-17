#include<stdio.h>
int main(){
    int n,ar[100],k,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(ar[i]==k){
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(ar[i]==k){
            printf("%d ",i);
            c++;
            break;
        }
    }
    if(c==0){
        printf("%d %d",-1,-1);
    }
}