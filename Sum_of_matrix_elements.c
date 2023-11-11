#include<stdio.h>
int main(){
    int n,m,ar[100][100];
    scanf("%d",&n);
    scanf("%d",&m);
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&ar[i][j]);
            s+=ar[i][j];
        }
    }
    printf("%d",s);
}