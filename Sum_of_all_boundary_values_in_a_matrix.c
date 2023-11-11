#include<stdio.h>
int main(){
    int n,m,ar1[10][10];
    scanf("%d%d",&n,&m);
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&ar1[i][j]);
        if(i==0 || j==0 || i==n-1||j==m-1){
            s+=ar1[i][j];
        }
        }
    }
    printf("%d",s);
}