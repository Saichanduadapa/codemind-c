#include<stdio.h>
int  main(){
    int n,ar[100],a=0,b=0,res=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(i%2==0){
        a+=ar[i];
        }
        else{
            b+=ar[i];
        }
        if(a<b){
            res=b-a;
        }
        else{
            res=a-b;
        }
}
        if(res%4==0){
            printf("X");
        }
        else{
            printf("Y");
        }
}