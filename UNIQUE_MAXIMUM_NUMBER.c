#include<stdio.h>
int main(){
    int n,ar[100],t=0,m=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(ar[i]==ar[j]){
                    c+=1;
                }
                }
            }
            //printf("%d",c);
             if(c==1 && m<ar[i]){
                 m=ar[i];
        }
        }
   if(m==0){
       printf("-1");
   }
   else{
       printf("%d",m);
   }
}