#include<stdio.h>
int main(){
    int n,ar[100],res[100],k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        int c=1,f=0;
        for(int j=i+1;j<n;j++){
            if(ar[i]<ar[j]){
                res[k]=c;
                f+=1;
                k++;
                break;
            }
            else{
                c+=1;
            }
        }
        if(f==0){
            res[k]=0;
            k+=1;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",res[i]);
    }
}