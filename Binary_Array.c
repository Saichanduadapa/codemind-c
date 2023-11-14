#include<stdio.h>
int main(){
    int n,ar[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
            if (ar[i]!=0 && ar[i]!=1){
                c=1;
                printf("False");
                break;
            }
    }
    if (c==0){
        printf("True");
    }
}