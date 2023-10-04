#include<stdio.h>
int main(){
    int n,a,ar[100],m=0,res[100],k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(m<ar[i]){
            m=ar[i];
        }
    }
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(ar[i]+a>=m){
            res[k]=1;
            k++;
        }
        else{
            res[k]=0;
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(res[i]==1){
            printf("%s ","True");
        }
        else{
            printf("%s ","False");
        }
    }
}