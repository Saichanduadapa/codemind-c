#include<stdio.h>
int main(){
    int n,ar[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(ar[i]==ar[j]){
                    printf("%d ",ar[i]);
                    c=1;
                    break;
                }
            }
        }
        if(c==1){
            break;
        }
    }
}